package com.samthegliderpilot.godroid

import android.app.Application
import androidx.lifecycle.AndroidViewModel
import androidx.lifecycle.viewModelScope
import java.io.IOException
import kotlinx.coroutines.Deferred
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.ExperimentalCoroutinesApi
import kotlinx.coroutines.async
import kotlinx.coroutines.launch
import kotlinx.coroutines.runBlocking

/**
 * Owns the [GoEngine] subprocess(es) for as long as the Activity it's scoped
 * to is alive, surviving configuration changes (e.g. rotation) the same way
 * any other ViewModel state does.
 *
 * GnuGo is started eagerly, off the main thread, and runs for the whole
 * Activity lifetime - it's needed either as the primary engine (GnuGo games)
 * or as the referee (Pachi games still ask it for board state/captures/legal
 * moves/scoring, since Pachi's own GTP server has no equivalent commands -
 * see the roadmap), so there's no case where it isn't needed. Pachi is a
 * second, *optional* process: lazily started on first use via
 * [ensurePachiEngine] and shut down again once no longer needed, rather than
 * kept running for the life of the Activity like GnuGo.
 *
 * `playGTP` keeps today's plain blocking signature and always talks to
 * GnuGo - every existing Gtp.java call site is unchanged. [playPachiGTP] is
 * the one new accessor, used only where Pachi actually needs to generate a
 * move or have its own settings configured.
 */
class GoEngineViewModel(application: Application) : AndroidViewModel(application) {

    private val gnuGoDeferred: Deferred<GoEngine> = startEngineAsync {
        GnuGoEngine.start(getApplication<Application>().applicationInfo.nativeLibraryDir)
    }
    private var pachiDeferred: Deferred<GoEngine>? = null

    private fun startEngineAsync(start: suspend () -> GoEngine): Deferred<GoEngine> =
        viewModelScope.async(Dispatchers.IO) {
            try {
                start()
            } catch (e: IOException) {
                throw RuntimeException("Could not start the engine", e)
            }
        }

    /** Starts Pachi if [needed] and not already running, or shuts it down (if
     * running) when no longer [needed] - a game switching back to GnuGo has no
     * reason to keep a second process alive. A no-op either way if already in
     * the requested state, including the common case of starting another game
     * with the same engine choice as before. Blocking when starting, like
     * [playGTP]: callers (Gtp.java's reStartGame, on its own worker thread)
     * need a live process to talk to as soon as this returns. */
    @Synchronized
    fun ensurePachiEngine(needed: Boolean) {
        if (needed) {
            if (pachiDeferred == null) {
                pachiDeferred = startEngineAsync { PachiEngine.start(getApplication()) }
            }
            runBlocking { pachiDeferred?.await() }
        } else {
            val old = pachiDeferred ?: return
            pachiDeferred = null
            viewModelScope.launch(Dispatchers.IO) {
                runCatching { old.await().shutdown() }
            }
        }
    }

    fun playGTP(input: String): String = runBlocking {
        gnuGoDeferred.await().sendCommand(input)
    }

    fun playPachiGTP(input: String): String = runBlocking {
        val deferred = pachiDeferred
            ?: throw IllegalStateException(
                "Pachi engine not started - ensurePachiEngine(true) wasn't called first"
            )
        deferred.await().sendCommand(input)
    }

    @OptIn(ExperimentalCoroutinesApi::class)
    override fun onCleared() {
        runBlocking {
            shutdownIfReady(gnuGoDeferred)
            pachiDeferred?.let { shutdownIfReady(it) }
        }
    }

    @OptIn(ExperimentalCoroutinesApi::class)
    private suspend fun shutdownIfReady(deferred: Deferred<GoEngine>) {
        if (deferred.isCompleted && deferred.getCompletionExceptionOrNull() == null) {
            deferred.getCompleted().shutdown()
        } else {
            deferred.cancel()
        }
    }
}
