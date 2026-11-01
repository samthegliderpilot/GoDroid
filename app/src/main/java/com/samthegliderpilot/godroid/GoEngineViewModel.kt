package com.samthegliderpilot.godroid

import android.app.Application
import androidx.lifecycle.AndroidViewModel
import androidx.lifecycle.viewModelScope
import java.io.IOException
import kotlinx.coroutines.Deferred
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.ExperimentalCoroutinesApi
import kotlinx.coroutines.async
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

    // How many moves Pachi's *current, still-live* process has already been
    // caught up to (GameInfo.syncPachiHistory's full replay) - -1 means "not
    // synced at all yet". Lets reStartGame skip that replay on a pure
    // rotation: this ViewModel (and the Pachi process it owns) survives
    // configuration changes, and every move already gets mirrored to Pachi
    // live as it's played (see Gtp.commitLiveMove/playMove's Pachi branch),
    // so a rotation reloading the *same* still-in-progress game has nothing
    // left for a full replay to actually fix - only a freshly (re)started
    // process, or a real change of game, does. Reset to -1 whenever the
    // process itself (re)starts, since a brand new process has nothing
    // mirrored into it yet regardless of what this used to say.
    private var pachiSyncedMoveCount = -1

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
     * with the same engine choice as before. Blocking either way, like
     * [playGTP]: callers (Gtp.java's reStartGame, on its own worker thread)
     * need a live process to talk to as soon as this returns when starting -
     * and shutdown blocks too (not fire-and-forget), so a quick
     * Pachi-off-then-on-again can never start a second process while the
     * first's shutdown is still in flight (if it ever doesn't sequence that
     * way is a question of degree, not of kind - the two engines don't share
     * any state, so nothing actually reads wrong data meanwhile, but two live
     * UCT searches at once is still real, needless CPU/memory pressure worth
     * just not risking). [@Synchronized] already serializes calls to this
     * method itself; blocking the shutdown here is what makes that guarantee
     * extend to the process lifecycle too, not just the method call. */
    @Synchronized
    fun ensurePachiEngine(needed: Boolean) {
        if (needed) {
            if (pachiDeferred == null) {
                pachiDeferred = startEngineAsync { PachiEngine.start(getApplication()) }
                pachiSyncedMoveCount = -1
            }
            runBlocking { pachiDeferred?.await() }
        } else {
            val old = pachiDeferred ?: return
            pachiDeferred = null
            pachiSyncedMoveCount = -1
            runBlocking { runCatching { old.await().shutdown() } }
        }
    }

    /** Whether [GameInfo.syncPachiHistory]'s full replay is actually needed
     * right now - see [pachiSyncedMoveCount]'s own comment. A move count
     * that doesn't match isn't proof the game actually changed (an undo
     * right before a rotation looks the same as a genuinely different,
     * shorter game), so this can occasionally ask for a replay that turns
     * out to still be a no-op-equivalent one - never the other way around,
     * which is the direction that would actually leave Pachi's board wrong. */
    @Synchronized
    fun pachiNeedsSync(moveNumber: Int): Boolean = pachiSyncedMoveCount != moveNumber

    @Synchronized
    fun markPachiSynced(moveNumber: Int) {
        pachiSyncedMoveCount = moveNumber
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
