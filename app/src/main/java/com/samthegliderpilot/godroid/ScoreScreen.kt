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
import androidx.compose.ui.draw.alpha
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.StrokeJoin
import androidx.compose.ui.graphics.drawscope.Stroke
import androidx.compose.ui.platform.ComposeView
import androidx.compose.ui.platform.LocalDensity
import androidx.compose.ui.res.stringResource
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontFamily
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
fun withMove(
    current: ScoreViewState,
    black: Boolean,
    showProgress: Boolean,
    text: String,
    blackToMove: Boolean,
): ScoreViewState {
    val cell = MoveCellState(showProgress, text)
    val next = if (black) current.copy(blackMove = cell) else current.copy(whiteMove = cell)
    return next.copy(blackToMove = blackToMove)
}

fun withCaptures(current: ScoreViewState, black: Int, white: Int): ScoreViewState =
    current.copy(blackCaptures = black, whiteCaptures = white)

fun withClockTimes(current: ScoreViewState, black: String, white: String): ScoreViewState =
    current.copy(blackTimeText = black, whiteTimeText = white)

fun withClockEnabled(current: ScoreViewState, enabled: Boolean): ScoreViewState =
    current.copy(clockEnabled = enabled)

fun withNormalScore(current: ScoreViewState): ScoreViewState = current.copy(
    capturesLabelRes = R.string.capturesLabelText,
    moveLabelRes = R.string.moveLabelText,
    scoreRowVisible = false,
    messageText = null,
    blackScoreText = null,
    whiteScoreText = null,
    engineScoreText = null,
    blackCapturedCount = null,
    whiteCapturedCount = null,
)

fun withMessageScore(current: ScoreViewState, message: String): ScoreViewState =
    current.copy(messageText = message)

fun withFinalScore(
    current: ScoreViewState,
    chineseRules: Boolean,
    blackTerritory: Int,
    whiteTerritory: Int,
    blackScore: String,
    whiteScore: String,
    engineScore: String?,
    blackCaptured: Int,
    whiteCaptured: Int,
    // False for a territory redisplay (surface resize, a display-setting
    // toggle, resuming an already-scored game) that never re-queried the
    // engine - that case must leave the engine-score row and captured
    // counts as they were, not blank them, or a redisplay racing with a
    // real scoring event would clobber a row that was just correctly
    // filled in. See Gtp.score()'s pFinalScore. No default: every call site
    // (there is exactly one, MainActivity.showScore) has a real answer from
    // Gtp.ScoreUpdate, and this flag is exactly the one a forgotten
    // argument must not silently get wrong.
    freshScore: Boolean,
): ScoreViewState {
    val territoryAndMove = current.copy(
        messageText = null,
        scoreRowVisible = true,
        capturesLabelRes = if (chineseRules) R.string.stonesLabelText else R.string.capturesLabelText,
        moveLabelRes = R.string.territoryAndScoreLabelText,
        // showProgress is forced off unconditionally, not just carried over
        // from current.blackMove/whiteMove - the double-pass path goes
        // straight from the AI's "thinking" spinner to this final score
        // without ever calling showMove() to reveal its last move first, so
        // the spinner would otherwise never clear.
        // Chinese (area) rules don't have a separate "territory" concept to
        // show alongside the total the way Japanese does - stones and
        // territory are just two parts of the same one area count, so
        // showing "territory / total" reads as if territory were withheld
        // from the total, when it's already folded in. Japanese rules keep
        // showing both: territory alone, then the full score (territory +
        // captures, which already includes each side's newly-dead enemy
        // stones - see Gtp.score()'s own showCaptures call).
        blackMove = MoveCellState(showProgress = false,
            text = if (chineseRules) blackScore else "$blackTerritory / $blackScore"),
        whiteMove = MoveCellState(showProgress = false,
            text = if (chineseRules) whiteScore else "$whiteTerritory / $whiteScore"),
        blackScoreText = blackScore,
        whiteScoreText = whiteScore,
    )
    // A redisplay didn't re-query the engine, so it has nothing new to say
    // about the engine-score row or the captured-stone counts - leave both
    // exactly as current.copy() above already carried them forward.
    if (!freshScore) {
        return territoryAndMove
    }
    return territoryAndMove.copy(
        engineScoreText = engineScore,
        // Only shown under Chinese rules - under Japanese rules the
        // Captures row above already displays this exact number, so a
        // parenthetical repeat would be redundant noise.
        blackCapturedCount = if (chineseRules) blackCaptured else null,
        whiteCapturedCount = if (chineseRules) whiteCaptured else null,
    )
}

/**
 * The top status bar: captures/move during play, territory & score (one
 * combined row) once scoring starts, or a full-width status message
 * (calculating/pass/resign/etc) overlaid on top. One [ScoreViewState] in, no
 * internal state of its own - `MainActivity` is still what decides *when*
 * each field changes, this just renders the current snapshot with a real
 * type scale and a winning-side cue.
 */
@Composable
fun ScoreScreen(state: ScoreViewState) {
    val winner = winningSide(state)
    // No "whose turn" marker once the game is actually over - nobody's turn
    // is meaningful once it's scored.
    val active = if (state.scoreRowVisible) null
        else if (state.blackToMove) Side.BLACK else Side.WHITE
    Column(modifier = Modifier.fillMaxWidth().padding(12.dp)) {
        GridRow(
            // The engine's own cross-check score (e.g. "B+75.5") goes here
            // rather than appended to whichever side's name it names - this
            // column is otherwise blank for the header, and the full "B+"/
            // "W+" text is already unambiguous about which side it's for.
            // Styled to match the winner's own name (titleLarge, bold,
            // primary color) - it's naming that same side's margin, so it
            // reads as part of the same "winner" cue rather than a plain
            // label.
            label = {
                state.engineScoreText?.let {
                    OutlinedText(
                        it,
                        style = MaterialTheme.typography.titleLarge,
                        fontWeight = if (winner != null) FontWeight.Bold else null,
                        fillColor = if (winner != null) MaterialTheme.colorScheme.primary
                            else MaterialTheme.colorScheme.onSurface,
                    )
                }
            },
            black = { SideHeader(stringResource(R.string.blackColorText), winner == Side.BLACK, active == Side.BLACK) },
            white = { SideHeader(stringResource(R.string.whiteColorText), winner == Side.WHITE, active == Side.WHITE) },
        )
        // The normal captures+move rows and a status message (e.g. "Calculating
        // territory status...", shown while Gtp.score() is still querying GnuGo)
        // are both ALWAYS composed here, just alpha-toggled - never swapped via
        // if/else - so this Box's height (the max of its children) never changes
        // between the two. That resize used to cascade into BoardView (it fills
        // "the rest of the screen" below this) and wipe the territory markers
        // Gtp.score() had just drawn onto it, right as the final score replaced
        // the "calculating" message.
        Box(modifier = Modifier.fillMaxWidth().heightIn(min = 64.dp)) {
            Column(modifier = Modifier.alpha(if (state.messageText == null) 1f else 0f)) {
                ScoreRow(
                    stringResource(state.capturesLabelRes),
                    stonesValueText(state.blackCaptures, state.blackCapturedCount),
                    stonesValueText(state.whiteCaptures, state.whiteCapturedCount),
                )
                GridRow(
                    label = { OutlinedText(stringResource(state.moveLabelRes), style = MaterialTheme.typography.titleMedium) },
                    black = { MoveCell(state.blackMove) },
                    white = { MoveCell(state.whiteMove) },
                )
            }
            if (state.messageText != null) {
                OutlinedText(
                    text = state.messageText,
                    style = MaterialTheme.typography.titleLarge,
                    modifier = Modifier.fillMaxWidth().padding(top = 8.dp)
                )
            }
        }
        // A separate row (not merged into the Box above) since the App Preferences
        // toggle that shows/hides it changes rarely, not as part of a fast
        // play<->scoring transition - the alpha-everywhere trick above exists
        // specifically to dodge *that* kind of resize, which doesn't apply here.
        if (state.clockEnabled) {
            ScoreRow(stringResource(R.string.timeLabelText), state.blackTimeText, state.whiteTimeText)
        }
    }
}

@Composable
private fun stonesValueText(stones: Int, captured: Int?): String =
    if (captured != null) stringResource(R.string.stonesWithCapturesFormat, stones, captured)
    else stones.toString()

private enum class Side { BLACK, WHITE }

private fun winningSide(state: ScoreViewState): Side? {
    // Only a genuinely finished (scored) game has a winner - an in-progress
    // game ahead on captures isn't "winning" in any real sense.
    if (!state.scoreRowVisible) {
        return null
    }
    val black = state.blackScoreText?.toFloatOrNull() ?: return null
    val white = state.whiteScoreText?.toFloatOrNull() ?: return null
    return when {
        black > white -> Side.BLACK
        white > black -> Side.WHITE
        else -> null
    }
}

@Composable
private fun SideHeader(name: String, isWinning: Boolean, isActive: Boolean) {
    val label = if (isWinning) "$name ★" else if (isActive) "● $name" else name
    OutlinedText(
        text = label,
        style = MaterialTheme.typography.titleLarge,
        fontWeight = if (isWinning) FontWeight.Bold else FontWeight.Normal,
        fillColor = when {
            isWinning -> MaterialTheme.colorScheme.primary
            isActive -> MaterialTheme.colorScheme.secondary
            else -> MaterialTheme.colorScheme.onSurface
        },
    )
}

@Composable
private fun ScoreRow(label: String, blackValue: String, whiteValue: String) {
    GridRow(
        label = { OutlinedText(label, style = MaterialTheme.typography.titleMedium) },
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
    // Pin an explicit font family instead of leaving it to style's/the
    // theme's default - some devices resolve the default differently
    // between this stroke-drawn pass and the plain fill pass below (same
    // text, two Paint styles), which reads as the two not matching.
    val pinnedStyle = style.copy(fontFamily = FontFamily.SansSerif)
    Box(modifier = modifier) {
        Text(
            text = text,
            style = pinnedStyle.copy(drawStyle = Stroke(width = strokeWidthPx, join = StrokeJoin.Round)),
            fontWeight = fontWeight,
            color = outlineColor,
        )
        Text(text = text, style = pinnedStyle, fontWeight = fontWeight, color = fillColor)
    }
}

/** One label column plus two equal value columns (black/white), kept the
 * same width across every row - including the Black/White header itself
 * (called with an empty label) - so values stay aligned under each other
 * from row to row. */
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
    OutlinedText(text = text, style = MaterialTheme.typography.titleLarge)
}

@Composable
private fun MoveCell(state: MoveCellState) {
    if (state.showProgress) {
        // Sized close to this cell's line height - a full-size (40dp) indicator would
        // grow this row and shove the board below it around while the AI is thinking.
        CircularProgressIndicator(modifier = Modifier.size(18.dp), strokeWidth = 2.dp)
    } else {
        // Smaller than ValueText's titleLarge (used by Captures/Stones and Time,
        // both always short) - this cell alone also carries the scored-state
        // "<territory> / <score>" text (e.g. "15 / 41.5"), which is the widest
        // value in the whole panel. A fixed, content-independent size (not just
        // applied when that longer text shows up) keeps this cell's height from
        // changing between live play and scored display.
        OutlinedText(text = state.text, style = MaterialTheme.typography.titleMedium)
    }
}
