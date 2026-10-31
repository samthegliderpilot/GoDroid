package com.samthegliderpilot.godroid

import android.os.Handler
import android.os.Looper

/** Java-callable single-method listener - a plain Kotlin interface SAM-converts
 * cleanly from a Java lambda, unlike a Kotlin `(String, String) -> Unit` function
 * type (same reasoning as [EdgeTapPaddingModeListener]). */
interface GameClockListener {
    fun onClockTick(blackTime: String, whiteTime: String)
}

/**
 * Tracks elapsed "time used" per color for the purely informational game clock -
 * no enforcement, no time limit, just how long it's been. A self-rescheduling
 * `Handler` tick (same mechanism as the existing "Slow AI Moves" pacing delay in
 * `Gtp.java`) owns the live display updates, but NOT turn-change detection -
 * [setActiveMover] is told that explicitly by `MainActivity.showMove()`, the same
 * UI-reveal-accurate signal `ScoreViewState.blackToMove` already uses. A raw
 * `GameInfo._playerBlackMoves` poll would be wrong here: that flips the instant
 * GnuGo *computes* its move, well before the Slow AI Moves delay actually reveals
 * it, which charged the AI's thinking time to whoever moves next instead. None of
 * this touches `Gtp.java`'s `PLAY_MOVE`/`UNDO_MOVE`/`NEW_GAME` orchestration -
 * deliberately left alone, per the roadmap.
 *
 * [listener] is called roughly once a second with the live formatted totals while
 * running. `MainActivity` owns one instance for the Activity's lifetime and drives
 * it from [attachToGame] (whenever `_gameInfo` changes), [setActiveMover] (from
 * `showMove()`), and [resume]/[pause] (from `onWindowFocusChanged`).
 */
class GameClock(private val listener: GameClockListener) {

    private val handler = Handler(Looper.getMainLooper())
    private val tickRunnable = Runnable { tick() }

    private var gameInfo: GameInfo? = null
    private var running = false
    private var blackSeconds = 0f
    private var whiteSeconds = 0f
    private var lastBlackToMove = true
    private var turnStartedAtMillis = 0L
    private var lastRecordedMoveNumber = -1

    /** Re-seeds tracking for [pGameInfo] - call whenever `_gameInfo` changes (a
     * fresh game, a loaded save, switching a collection entry). Restores elapsed
     * time already recorded on the SGF tree (see [GameInfo.lastRecordedElapsedTime]),
     * or starts both colors at zero for a game with nothing recorded yet. Does not
     * itself start ticking - call [resume] for that (normally driven by the window
     * gaining focus, which also covers the very first display after launch). */
    fun attachToGame(pGameInfo: GameInfo) {
        pause()
        gameInfo = pGameInfo
        val recorded = pGameInfo.lastRecordedElapsedTime()
        blackSeconds = recorded?.get(0) ?: 0f
        whiteSeconds = recorded?.get(1) ?: 0f
        lastBlackToMove = pGameInfo._playerBlackMoves
        lastRecordedMoveNumber = pGameInfo._moveNumber
        publish()
    }

    /** Tells the clock which color should actually be charged time right now -
     * called from `MainActivity.showMove()`, not polled. Banks the elapsed time
     * for whoever was active before the switch. */
    fun setActiveMover(pBlackToMove: Boolean) {
        if (pBlackToMove == lastBlackToMove) {
            return
        }
        if (running) {
            bankElapsed()
        }
        lastBlackToMove = pBlackToMove
        publish()
    }

    /** Starts/resumes ticking - a no-op if already running, if no game is attached,
     * or if the attached game is already finished (nothing left to track). */
    fun resume() {
        val info = gameInfo ?: return
        if (running || info.bothPlayersPassed()) {
            return
        }
        turnStartedAtMillis = System.currentTimeMillis()
        running = true
        handler.removeCallbacks(tickRunnable)
        handler.postDelayed(tickRunnable, _TICK_MILLIS)
    }

    /** Stops ticking and banks whatever's in flight, so a paused duration (a dialog
     * open, the app backgrounded) is never silently counted as thinking time. Safe
     * to call repeatedly / when not running. */
    fun pause() {
        if (!running) {
            return
        }
        bankElapsed()
        running = false
        handler.removeCallbacks(tickRunnable)
    }

    private fun bankElapsed() {
        val now = System.currentTimeMillis()
        val elapsedSeconds = (now - turnStartedAtMillis) / 1000f
        if (lastBlackToMove) blackSeconds += elapsedSeconds else whiteSeconds += elapsedSeconds
        turnStartedAtMillis = now
    }

    private fun tick() {
        val info = gameInfo
        if (!running || info == null) {
            return
        }
        if (info._moveNumber != lastRecordedMoveNumber) {
            lastRecordedMoveNumber = info._moveNumber
            // A real move was just added to the tree - persist the current totals
            // onto it. (Attribution for the in-flight turn is still setActiveMover's
            // job; this only decides *when* to write, by watching the move count.)
            info.recordElapsedTime(blackSeconds, whiteSeconds)
        }
        publish()
        if (info.bothPlayersPassed()) {
            running = false
            return
        }
        handler.postDelayed(tickRunnable, _TICK_MILLIS)
    }

    private fun publish() {
        val liveElapsed =
            if (running) (System.currentTimeMillis() - turnStartedAtMillis) / 1000f else 0f
        val liveBlack = blackSeconds + if (running && lastBlackToMove) liveElapsed else 0f
        val liveWhite = whiteSeconds + if (running && !lastBlackToMove) liveElapsed else 0f
        listener.onClockTick(format(liveBlack), format(liveWhite))
    }

    companion object {
        private const val _TICK_MILLIS = 1000L

        private fun format(pSeconds: Float): String {
            val totalSeconds = pSeconds.toInt().coerceAtLeast(0)
            return "%d:%02d".format(totalSeconds / 60, totalSeconds % 60)
        }
    }
}
