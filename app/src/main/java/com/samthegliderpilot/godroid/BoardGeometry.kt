package com.samthegliderpilot.godroid

import android.graphics.Point

/**
 * Pure screen-pixel <-> board-coordinate conversion math for BoardView.
 * Takes every input it needs as a parameter (active cell width, board
 * offset) rather than reading BoardView's fields directly, instead of
 * being entangled in BoardView's Canvas/Bitmap/Paint static-init side
 * effects. Returns `android.graphics.Point`, so (like GtpProtocol's
 * vertex/point conversions) it still needs Robolectric or an instrumented
 * test to exercise directly - plain JUnit's Android stub throws on `Point`
 * construction - but pulling the arithmetic out here is what makes adding
 * that coverage later a self-contained addition instead of also requiring
 * BoardView's full Canvas setup.
 */
object BoardGeometry {

    /** Screen pixel -> board coordinate (floor division by the cell width). */
    @JvmStatic
    fun coord2Point(x: Float, y: Float, activeCellWidth: Float): Point =
        Point((x / activeCellWidth).toInt(), (y / activeCellWidth).toInt())

    /** Board coordinate -> screen pixel (top-left of its cell), or null for a pass. */
    @JvmStatic
    fun point2Coord(
        point: Point,
        activeCellWidth: Float,
        xBoardOffset: Float,
        yBoardOffset: Float
    ): Point? {
        if (point is GameInfo.Passed) return null
        return Point(
            (point.x * activeCellWidth + xBoardOffset).toInt(),
            (point.y * activeCellWidth + yBoardOffset).toInt()
        )
    }
}
