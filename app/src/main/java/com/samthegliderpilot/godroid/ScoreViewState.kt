package com.samthegliderpilot.godroid

/**
 * Everything the top status bar displays, as one piece of state instead of a
 * dozen individually-mutated TextViews/visibilities. `MainActivity`'s
 * `showMove`/`showCaptures`/`showScore` each produce a new copy with just
 * their own slice changed - mirrors exactly what those three methods already
 * did imperatively (including `showScore`'s final-score branch overwriting
 * the same move-text slots `showMove` owns), just expressed as data instead
 * of view mutation.
 */
data class ScoreViewState(
    val blackMove: MoveCellState = MoveCellState(),
    val whiteMove: MoveCellState = MoveCellState(),
    val blackCaptures: Int = 0,
    val whiteCaptures: Int = 0,
    val blackScoreText: String? = null,
    val whiteScoreText: String? = null,
    val capturesLabelRes: Int = R.string.capturesLabelText,
    val moveLabelRes: Int = R.string.moveLabelText,
    // True once the game is actually scored - winningSide()/ScoreScreen use
    // it to stop showing whose turn it is (nobody's, once a game is over)
    // and to pick a winner. The territory+score numbers themselves live in
    // blackMove/whiteMove.text like any other move-row content, not behind
    // a second visibility flag - see withFinalScore.
    val scoreRowVisible: Boolean = false,
    val messageText: String? = null,
    val blackToMove: Boolean = true,
)

data class MoveCellState(
    val showProgress: Boolean = false,
    val text: String = "",
)
