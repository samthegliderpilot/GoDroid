package com.samthegliderpilot.godroid

import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.BoxWithConstraints
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.heightIn
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.width
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
import androidx.compose.ui.text.TextMeasurer
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.rememberTextMeasurer
import androidx.compose.ui.text.style.TextOverflow
import androidx.compose.ui.unit.Constraints
import androidx.compose.ui.unit.Density
import androidx.compose.ui.unit.Dp
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.isUnspecified

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
    val colors = MaterialTheme.colorScheme
    val type = MaterialTheme.typography

    // Every cell is described as data first (what it says, how it is drawn), so
    // the same description is used to measure the columns and to draw the cell -
    // the two can never disagree about how wide something is.
    val headerRow = GridRowSpec(
        // The engine's own cross-check score (e.g. "B+75.5") goes here
        // rather than appended to whichever side's name it names - this
        // column is otherwise blank for the header, and the full "B+"/
        // "W+" text is already unambiguous about which side it's for.
        // Styled to match the winner's own name (titleLarge, bold,
        // primary color) - it's naming that same side's margin, so it
        // reads as part of the same "winner" cue rather than a plain
        // label.
        label = state.engineScoreText?.let {
            Cell.Text(
                it, type.titleLarge,
                fontWeight = if (winner != null) FontWeight.Bold else null,
                fill = if (winner != null) colors.primary else colors.onSurface,
            )
        } ?: Cell.Empty,
        black = sideHeaderCell(stringResource(R.string.blackColorText), winner == Side.BLACK, active == Side.BLACK),
        white = sideHeaderCell(stringResource(R.string.whiteColorText), winner == Side.WHITE, active == Side.WHITE),
    )
    val capturesRow = valueRow(
        stringResource(state.capturesLabelRes),
        stonesValueText(state.blackCaptures, state.blackCapturedCount),
        stonesValueText(state.whiteCaptures, state.whiteCapturedCount),
    )
    val moveRow = GridRowSpec(
        label = Cell.Text(stringResource(state.moveLabelRes), type.titleMedium, fill = colors.onSurface),
        black = moveCell(state.blackMove),
        white = moveCell(state.whiteMove),
    )
    val timeRow = if (state.clockEnabled) {
        valueRow(stringResource(R.string.timeLabelText), state.blackTimeText, state.whiteTimeText)
    } else null
    val rows = listOfNotNull(headerRow, capturesRow, moveRow, timeRow)

    BoxWithConstraints(modifier = Modifier.fillMaxWidth()) {
        val density = LocalDensity.current
        val measurer = rememberTextMeasurer()
        val padding = 12.dp
        // Widths are decided once for the whole panel, from every row at once, so
        // the columns line up from row to row. Columns are resized first
        // (ColumnFit); only a column that still cannot fit its content has its text
        // shrunk (OutlinedText), which happens inside the cell.
        val natural = IntArray(3) { column ->
            rows.maxOf { naturalWidthPx(measurer, it.cell(column), density) }
        }
        val availablePx = constraints.maxWidth - with(density) { (padding * 2).roundToPx() }
        val widthsPx = if (constraints.hasBoundedWidth) ColumnFit.widths(natural, availablePx) else natural
        val widths = widthsPx.map { with(density) { it.toDp() } }

        Column(modifier = Modifier.fillMaxWidth().padding(padding)) {
            GridRow(widths, headerRow)
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
                    GridRow(widths, capturesRow)
                    GridRow(widths, moveRow)
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
            if (timeRow != null) {
                GridRow(widths, timeRow)
            }
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

/** What one cell of the status grid shows and how it is drawn. */
private sealed interface Cell {
    data class Text(
        val text: String,
        val style: TextStyle,
        val fontWeight: FontWeight? = null,
        val fill: Color,
    ) : Cell

    /** The AI-is-thinking spinner. */
    data object Progress : Cell

    data object Empty : Cell
}

/** The three cells of one row: the label column, then black and white. */
private class GridRowSpec(val label: Cell, val black: Cell, val white: Cell) {
    fun cell(column: Int): Cell = when (column) {
        0 -> label
        1 -> black
        else -> white
    }
}

@Composable
private fun sideHeaderCell(name: String, isWinning: Boolean, isActive: Boolean): Cell.Text {
    val colors = MaterialTheme.colorScheme
    return Cell.Text(
        text = if (isWinning) "$name ★" else if (isActive) "● $name" else name,
        style = MaterialTheme.typography.titleLarge,
        fontWeight = if (isWinning) FontWeight.Bold else FontWeight.Normal,
        fill = when {
            isWinning -> colors.primary
            isActive -> colors.secondary
            else -> colors.onSurface
        },
    )
}

/** A label (titleMedium) plus a black and a white value (titleLarge). */
@Composable
private fun valueRow(label: String, blackValue: String, whiteValue: String): GridRowSpec {
    val colors = MaterialTheme.colorScheme
    val type = MaterialTheme.typography
    return GridRowSpec(
        label = Cell.Text(label, type.titleMedium, fill = colors.onSurface),
        black = Cell.Text(blackValue, type.titleLarge, fill = colors.onSurface),
        white = Cell.Text(whiteValue, type.titleLarge, fill = colors.onSurface),
    )
}

/**
 * The same size as every other value cell (titleLarge). This cell alone also
 * carries the scored-state "<territory> / <score>" text (e.g. "15 / 41.5"),
 * the widest value in the whole panel: the grid gives it the room it needs
 * and shrinks it only if its column still cannot fit (see ColumnFit and
 * OutlinedText). One fixed size, whatever the content, keeps this row's
 * height from changing between live play and scored display.
 */
@Composable
private fun moveCell(state: MoveCellState): Cell =
    if (state.showProgress) {
        Cell.Progress
    } else {
        Cell.Text(state.text, MaterialTheme.typography.titleLarge, fill = MaterialTheme.colorScheme.onSurface)
    }

/** Sized close to a text cell's line height - a full-size (40dp) indicator would
 * grow its row and shove the board below it around while the AI is thinking. */
private val PROGRESS_SIZE = 18.dp

/** How wide [cell] wants to be, in pixels, at its full size on one line. */
private fun naturalWidthPx(measurer: TextMeasurer, cell: Cell, density: Density): Int = when (cell) {
    is Cell.Text -> measurer.measure(
        text = cell.text,
        // Measured exactly as OutlinedText draws it (pinned font family and weight).
        style = cell.style.copy(
            fontFamily = FontFamily.SansSerif,
            fontWeight = cell.fontWeight ?: cell.style.fontWeight,
        ),
        softWrap = false,
        maxLines = 1,
    ).size.width
    Cell.Progress -> with(density) { PROGRESS_SIZE.roundToPx() }
    Cell.Empty -> 0
}

/**
 * Text with a thin stroke of the opposite tone behind its fill - like a map
 * label or subtitle - so it stays legible over the painted board-art
 * background no matter what's directly behind it. Always a single line: a
 * string wider than the room it is given (a long translation in a narrow
 * column) is shrunk to fit - see [fitStyleToWidth] - instead of wrapping,
 * and is ellipsized only if even the smallest allowed size does not fit.
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
    val measurer = rememberTextMeasurer()
    BoxWithConstraints(modifier = modifier) {
        // One fitted style shared by both passes below, so the stroke and the
        // fill are always the same size.
        val fitted = fitStyleToWidth(measurer, text, pinnedStyle, fontWeight, constraints.maxWidth)
        Text(
            text = text,
            style = fitted.copy(drawStyle = Stroke(width = strokeWidthPx, join = StrokeJoin.Round)),
            fontWeight = fontWeight,
            color = outlineColor,
            maxLines = 1,
            softWrap = false,
            overflow = TextOverflow.Ellipsis,
        )
        Text(
            text = text,
            style = fitted,
            fontWeight = fontWeight,
            color = fillColor,
            maxLines = 1,
            softWrap = false,
            overflow = TextOverflow.Ellipsis,
        )
    }
}

/**
 * [style] with its font size reduced just enough that [text] fits on one line
 * in [maxWidthPx], or [style] unchanged if it already fits. Only the font size
 * changes - the line height stays as the theme set it, so the panel is the same
 * height whether or not a label was shrunk and the board below never moves.
 */
private fun fitStyleToWidth(
    measurer: TextMeasurer,
    text: String,
    style: TextStyle,
    fontWeight: FontWeight?,
    maxWidthPx: Int,
): TextStyle {
    // An unbounded width (not inside a sized column) or a style with no
    // explicit size has nothing to fit against.
    if (maxWidthPx == Constraints.Infinity || style.fontSize.isUnspecified) {
        return style
    }
    fun widthAt(candidate: TextStyle): Int =
        measurer.measure(
            text = text,
            style = candidate.copy(fontWeight = fontWeight ?: candidate.fontWeight),
            softWrap = false,
            maxLines = 1,
        ).size.width

    var scale = TextFit.scaleFor(widthAt(style), maxWidthPx)
    if (scale == 1f) {
        return style
    }
    // Text width is only roughly proportional to size (glyph hinting and rounding),
    // so confirm the proportional guess and nudge it down a little if it is
    // still a pixel or two too wide.
    var fitted = style.copy(fontSize = style.fontSize * scale)
    repeat(3) {
        if (scale > TextFit.DEFAULT_MIN_SCALE && widthAt(fitted) > maxWidthPx) {
            scale = (scale * 0.96f).coerceAtLeast(TextFit.DEFAULT_MIN_SCALE)
            fitted = style.copy(fontSize = style.fontSize * scale)
        }
    }
    return fitted
}

/** One row of the grid: the label column, then black and white, each exactly as
 * wide as [widths] says. The same widths are used for every row, so values stay
 * aligned under each other from row to row - including under the Black/White
 * header itself. */
@Composable
private fun GridRow(widths: List<Dp>, row: GridRowSpec) {
    Row(modifier = Modifier.fillMaxWidth().padding(top = 4.dp)) {
        GridCell(row.label, widths[0], Alignment.TopStart)
        GridCell(row.black, widths[1], Alignment.Center)
        GridCell(row.white, widths[2], Alignment.Center)
    }
}

@Composable
private fun GridCell(cell: Cell, width: Dp, alignment: Alignment) {
    Box(modifier = Modifier.width(width), contentAlignment = alignment) {
        when (cell) {
            is Cell.Text -> OutlinedText(
                text = cell.text,
                style = cell.style,
                fontWeight = cell.fontWeight,
                fillColor = cell.fill,
            )
            Cell.Progress -> CircularProgressIndicator(modifier = Modifier.size(PROGRESS_SIZE), strokeWidth = 2.dp)
            Cell.Empty -> Unit
        }
    }
}
