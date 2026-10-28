package com.samthegliderpilot.godroid

import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.heightIn
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.material3.CircularProgressIndicator
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.MutableState
import androidx.compose.runtime.mutableStateOf
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.StrokeJoin
import androidx.compose.ui.graphics.drawscope.Stroke
import androidx.compose.ui.platform.ComposeView
import androidx.compose.ui.platform.LocalDensity
import androidx.compose.ui.res.stringResource
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp

/** Java-callable: builds the [MutableState] `MainActivity` holds and passes
 * back into the update functions below. */
fun createScoreViewState(): MutableState<ScoreViewState> = mutableStateOf(ScoreViewState())

/** Java-callable: wires [ScoreScreen] up to render from [state], called once
 * from `onCreate` right after the ComposeView is inflated. */
fun setUpScoreComposeView(composeView: ComposeView, state: MutableState<ScoreViewState>) {
    composeView.setContent {
        GoDroidTheme { ScoreScreen(state.value) }
    }
}

/** Java-callable state transitions - one per thing `showMove`/`showCaptures`/
 * `showScore` used to mutate views for directly. Each takes the current
 * state and returns the next one; `MainActivity` still decides which to call
 * and with what, this just replaces "set 6 TextView properties" with
 * "build the next ScoreViewState". */
fun withMove(current: ScoreViewState, black: Boolean, showProgress: Boolean, text: String): ScoreViewState {
    val cell = MoveCellState(showProgress, text)
    return if (black) current.copy(blackMove = cell) else current.copy(whiteMove = cell)
}

fun withCaptures(current: ScoreViewState, black: Int, white: Int): ScoreViewState =
    current.copy(blackCaptures = black, whiteCaptures = white)

fun withNormalScore(current: ScoreViewState): ScoreViewState = current.copy(
    capturesLabelRes = R.string.capturesLabelText,
    moveLabelRes = R.string.moveLabelText,
    scoreRowVisible = false,
    messageText = null,
    blackScoreText = null,
    whiteScoreText = null,
)

fun withMessageScore(current: ScoreViewState, message: String): ScoreViewState =
    current.copy(messageText = message)

fun withEstimatedScore(current: ScoreViewState, blackEstimate: Boolean, text: String): ScoreViewState =
    current.copy(
        messageText = null,
        scoreRowVisible = true,
        blackScoreText = if (blackEstimate) text else current.blackScoreText,
        whiteScoreText = if (!blackEstimate) text else current.whiteScoreText,
    )

fun withFinalScore(
    current: ScoreViewState,
    chineseRules: Boolean,
    blackTerritory: Int,
    whiteTerritory: Int,
    blackScore: String,
    whiteScore: String,
): ScoreViewState = current.copy(
    messageText = null,
    scoreRowVisible = true,
    capturesLabelRes = if (chineseRules) R.string.stonesLabelText else R.string.capturesLabelText,
    moveLabelRes = R.string.territoryLabelText,
    blackMove = current.blackMove.copy(text = blackTerritory.toString()),
    whiteMove = current.whiteMove.copy(text = whiteTerritory.toString()),
    blackScoreText = blackScore,
    whiteScoreText = whiteScore,
)

/**
 * The top status bar: captures/move during play, territory/score once
 * scoring starts, or a full-width message (pass/resign/etc). One
 * [ScoreViewState] in, no internal state of its own - `MainActivity` is
 * still what decides *when* each field changes, this just renders the
 * current snapshot with a real type scale and a winning-side cue.
 */
@Composable
fun ScoreScreen(state: ScoreViewState) {
    val winner = winningSide(state)
    Column(modifier = Modifier.fillMaxWidth().padding(12.dp)) {
        GridRow(
            label = {},
            black = { SideHeader(stringResource(R.string.blackColorText), winner == Side.BLACK) },
            white = { SideHeader(stringResource(R.string.whiteColorText), winner == Side.WHITE) },
        )
        // Reserve the height the normal captures+move rows need, so swapping in the
        // thinking-spinner or a status message (e.g. "your opponent passed") doesn't
        // change the Column's total height and shove the board below it around.
        Box(modifier = Modifier.heightIn(min = 64.dp)) {
            Column {
                if (state.messageText != null) {
                    OutlinedText(
                        text = state.messageText,
                        style = MaterialTheme.typography.titleMedium,
                        modifier = Modifier.fillMaxWidth().padding(top = 8.dp)
                    )
                } else {
                    ScoreRow(stringResource(state.capturesLabelRes), state.blackCaptures.toString(), state.whiteCaptures.toString())
                    GridRow(
                        label = { OutlinedText(stringResource(state.moveLabelRes), style = MaterialTheme.typography.bodyLarge) },
                        black = { MoveCell(state.blackMove) },
                        white = { MoveCell(state.whiteMove) },
                    )
                    if (state.scoreRowVisible) {
                        ScoreRow(
                            stringResource(R.string.scoreLabelText),
                            state.blackScoreText.orEmpty(),
                            state.whiteScoreText.orEmpty(),
                        )
                    }
                }
            }
        }
    }
}

private enum class Side { BLACK, WHITE }

private fun winningSide(state: ScoreViewState): Side? {
    val (black, white) = if (state.scoreRowVisible) {
        val b = state.blackScoreText?.toFloatOrNull() ?: return null
        val w = state.whiteScoreText?.toFloatOrNull() ?: return null
        b to w
    } else {
        state.blackCaptures.toFloat() to state.whiteCaptures.toFloat()
    }
    return when {
        black > white -> Side.BLACK
        white > black -> Side.WHITE
        else -> null
    }
}

@Composable
private fun SideHeader(name: String, isWinning: Boolean) {
    OutlinedText(
        text = name,
        style = MaterialTheme.typography.titleMedium,
        fontWeight = if (isWinning) FontWeight.Bold else FontWeight.Normal,
        fillColor = if (isWinning) MaterialTheme.colorScheme.primary else MaterialTheme.colorScheme.onSurface,
    )
}

@Composable
private fun ScoreRow(label: String, blackValue: String, whiteValue: String) {
    GridRow(
        label = { OutlinedText(label, style = MaterialTheme.typography.bodyLarge) },
        black = { ValueText(blackValue) },
        white = { ValueText(whiteValue) },
    )
}

/**
 * Text with a thin stroke of the opposite tone behind its fill - like a map
 * label or subtitle - so it stays legible over the painted board-art
 * background no matter what's directly behind it. Scales with the text
 * itself (no fixed-size box to fit), so it works the same regardless of how
 * long a translated string runs.
 */
@Composable
private fun OutlinedText(
    text: String,
    style: TextStyle,
    modifier: Modifier = Modifier,
    fontWeight: FontWeight? = null,
    fillColor: Color = MaterialTheme.colorScheme.onSurface,
    outlineColor: Color = MaterialTheme.colorScheme.surface,
) {
    val strokeWidthPx = with(LocalDensity.current) { 2.5.dp.toPx() }
    Box(modifier = modifier) {
        Text(
            text = text,
            style = style.copy(drawStyle = Stroke(width = strokeWidthPx, join = StrokeJoin.Round)),
            fontWeight = fontWeight,
            color = outlineColor,
        )
        Text(text = text, style = style, fontWeight = fontWeight, color = fillColor)
    }
}

/** One label column plus two equal value columns (black/white), kept the
 * same width across every row - including the Black/White header, whose
 * label cell is empty - so values stay aligned under their header. */
@Composable
private fun GridRow(
    label: @Composable () -> Unit,
    black: @Composable () -> Unit,
    white: @Composable () -> Unit,
) {
    Row(modifier = Modifier.fillMaxWidth().padding(top = 4.dp)) {
        Box(modifier = Modifier.weight(1f)) { label() }
        Box(modifier = Modifier.weight(1f), contentAlignment = Alignment.Center) { black() }
        Box(modifier = Modifier.weight(1f), contentAlignment = Alignment.Center) { white() }
    }
}

@Composable
private fun ValueText(text: String) {
    OutlinedText(text = text, style = MaterialTheme.typography.titleMedium)
}

@Composable
private fun MoveCell(state: MoveCellState) {
    if (state.showProgress) {
        // Sized close to ValueText's line height - a full-size (40dp) indicator would
        // grow this row and shove the board below it around while the AI is thinking.
        CircularProgressIndicator(modifier = Modifier.size(18.dp), strokeWidth = 2.dp)
    } else {
        ValueText(state.text)
    }
}
