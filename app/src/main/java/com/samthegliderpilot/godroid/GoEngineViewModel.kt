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
 * Owns the [GoEngine] subprocess for as long as the Activity it's scoped to
 * is alive, surviving configuration changes (e.g. rotation) the same way
 * any other ViewModel state does. Starts the engine off the main thread and
 * shuts it down in [onCleared], which only fires when the Activity is truly
 * finishing - not on a config-change recreation.
 *
 * `playGTP` keeps today's plain blocking signature so Gtp.java and
 * GameInfo.java don't need to change how they call it.
 */
class GoEngineViewModel(application: Application) : AndroidViewModel(application) {

    private val engineDeferred: Deferred<GoEngine> =
        viewModelScope.async(Dispatchers.IO) {
            try {
                GnuGoEngine.start(getApplication<Application>().applicationInfo.nativeLibraryDir)
            } catch (e: IOException) {
                throw RuntimeException("Could not start the GnuGo engine", e)
            }
        }

    fun playGTP(input: String): String = runBlocking {
        engineDeferred.await().sendCommand(input)
    }

    @OptIn(ExperimentalCoroutinesApi::class)
    override fun onCleared() {
        runBlocking {
            if (engineDeferred.isCompleted && engineDeferred.getCompletionExceptionOrNull() == null) {
                engineDeferred.getCompleted().shutdown()
            } else {
                engineDeferred.cancel()
            }
        }
    }
}
