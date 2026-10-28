package com.samthegliderpilot.godroid

import android.graphics.Point
import android.view.GestureDetector
import android.view.MotionEvent
import android.view.ViewConfiguration
import kotlin.math.abs
import kotlin.math.max

/**
 * Tap-to-preview/tap-to-confirm stone placement, drag, arrow-key stepping,
 * and the long-press zoom toggle. Split out of `BoardView`, which it still
 * reaches into directly for board geometry (`_activeCellWidth`/
 * `_activeXBoardOffset`/`_activeYBoardOffset`/`_boardSize`), `_legalMoves`,
 * zoom state (`_isZoom`/`_zoomViewPoint`), `_mainActivity`/`_tapHint`, and
 * the render callback `drawMovingStone` - all package-private members of
 * `BoardView`, same as before the split, just reached through an explicit
 * reference instead of inner-class ambient access. This is a gesture
 * controller, not a renderer - it never touches a `Canvas`/`Paint`/bitmap
 * directly, only calls back into `BoardView.drawMovingStone` for that.
 */
class BoardGestureListener(
    private val boardView: BoardView
) : GestureDetector.SimpleOnGestureListener() {

    companion object {
        private const val HINT_DISPLAY_TIME_MILLIS = 2 * 60 * 1000
    }

    private var lastHintDisplayTime: Long = 0

    @JvmField
    var _showHint = true

    private var cellWidthDiv2 = 0f
    private var cellWidthDiv3 = 0f

    // A floor under the tap-tolerance thresholds below, so a dense board
    // (19x19) or a high-DPI/high-touch-sampling-rate device can't shrink
    // them past normal finger jitter. Same constant Android itself uses to
    // decide "did the finger really move" for scrolling, long-press, etc.
    private val touchSlop = ViewConfiguration.get(boardView.context).scaledTouchSlop

    private var lastX = 0f
    private var lastY = 0f

    private var lastPoint: Point? = null

    @JvmField
    var _stonePositionChanged = false

    private var wasTapUp = false

    // Written from either the UI thread or the gnuGo background thread
    // (BoardView.lockScreen), read from the UI thread in every gesture
    // callback below - needs to be visible across threads promptly.
    @JvmField
    @Volatile
    var _interactionLocked = false

    fun reset(cellWidth: Float) {
        cellWidthDiv2 = cellWidth / 2
        cellWidthDiv3 = max(cellWidth / 3f, touchSlop.toFloat())
        lastX = -cellWidth - 1
        lastY = -cellWidth - 1
        lastPoint = null
        _stonePositionChanged = false
    }

    fun showHint() {
        val currentTime = System.currentTimeMillis()
        if (currentTime - HINT_DISPLAY_TIME_MILLIS < lastHintDisplayTime) {
            return
        }
        boardView._tapHint.show()
        lastHintDisplayTime = currentTime
    }

    private fun coord2Point(x: Float, y: Float): Point =
        BoardGeometry.coord2Point(x, y, boardView._activeCellWidth)

    override fun onScroll(
        e1: MotionEvent?,
        e2: MotionEvent,
        distanceX: Float,
        distanceY: Float
    ): Boolean {
        if (_interactionLocked) {
            return true
        }
        val x = e2.x - boardView._activeXBoardOffset
        val y = e2.y - boardView._activeYBoardOffset
        val cellWidth = boardView._activeCellWidth
        val slop = touchSlop
        // Require the touch to clear the current cell's bounds by a real,
        // intentional amount (not just a stray pixel of finger jitter) before
        // treating it as having moved to a different intersection - without
        // this, a touch landing near a cell boundary could flip back and
        // forth between neighboring cells on jitter alone, which blocks
        // onSingleTapUp from ever committing a placement (see below).
        if (x < lastX - slop || x > lastX + cellWidth + slop ||
            y < lastY - slop || y > lastY + cellWidth + slop
        ) {
            val newPoint = coord2Point(x, y)
            if (!boardView._legalMoves.contains(newPoint)) {
                return true
            }
            moveStone(newPoint)
        }
        return true
    }

    private fun moveStone(newPoint: Point) {
        val cellWidth = boardView._activeCellWidth
        lastX = newPoint.x * cellWidth
        lastY = newPoint.y * cellWidth
        val newLastPoint = Point(newPoint)
        val vertex = Gtp.point2Vertex(newPoint, boardView._boardSize)
        boardView._mainActivity.showMove(boardView.drawMovingStone(newPoint, lastPoint), vertex)
        lastPoint = newLastPoint
        _stonePositionChanged = true
    }

    override fun onSingleTapUp(e: MotionEvent): Boolean {
        if (_interactionLocked) {
            return true
        }
        wasTapUp = true
        if (_stonePositionChanged) {
            showHint()
            return true
        }
        val x = e.x - boardView._activeXBoardOffset
        val y = e.y - boardView._activeYBoardOffset
        val hitRange = cellWidthDiv3
        val hitX = lastX + cellWidthDiv2
        val hitY = lastY + cellWidthDiv2
        if (abs(hitX - x) < hitRange && abs(hitY - y) < hitRange) {
            setStone()
        }
        return true
    }

    fun setStone() {
        _showHint = false
        val point = lastPoint ?: return
        lastPoint = null
        boardView.drawMovingStone(Point(point), false)
        boardView._mainActivity.nextMove(point)
    }

    fun moveStoneIncrementally(diffXArg: Int, diffYArg: Int) {
        if (_interactionLocked) {
            return
        }
        var diffX = diffXArg
        var diffY = diffYArg
        var point = lastPoint
        if (diffX == 0 && diffY == 0) {
            if (point != null) {
                setStone()
            }
            return
        }
        val legalMoves = boardView._legalMoves
        if (point == null) {
            if (legalMoves.isEmpty()) {
                _stonePositionChanged = false
                return
            }
            point = legalMoves.firstOrNull()!!
            diffX = 0
            diffY = 0
        }
        var newX = point.x
        var newY = point.y
        val boardSize = boardView._boardSize
        val newPoint = Point()
        do {
            newX += diffX
            newY += diffY
            if (newX < 0 || newX == boardSize || newY < 0 || newY == boardSize) {
                return
            }
            newPoint.set(newX, newY)
        } while (!legalMoves.contains(newPoint))
        moveStone(newPoint)
    }

    fun onUp() {
        if (_interactionLocked) {
            return
        }
        if (!wasTapUp) {
            showHint()
        }
        wasTapUp = false
    }

    override fun onDown(e: MotionEvent): Boolean {
        if (_interactionLocked) {
            return true
        }
        _stonePositionChanged = false
        return onScroll(null, e, 0f, 0f)
    }

    override fun onLongPress(e: MotionEvent) {
        if (_interactionLocked) {
            return
        }
        if (boardView._isZoom) {
            boardView._isZoom = false
        } else {
            boardView._isZoom = true
            // The original Java here called `_legalMoves.contains(lastPoint)`
            // unconditionally, which would NPE if long-press fires with no
            // prior drag/tap (lastPoint null) - LegalMoves.contains takes a
            // non-null Point, so Kotlin catches this at compile time instead
            // of it staying a latent crash. Falling through to the raw-touch
            // point (the else branch below) matches the evident intent.
            val point = lastPoint
            boardView._zoomViewPoint = if (point != null && boardView._legalMoves.contains(point)) point
                else coord2Point(e.x, e.y)
        }
        boardView._mainActivity.drawBoard(false)
        wasTapUp = true
    }
}
