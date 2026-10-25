package com.samthegliderpilot.godroid

/**
 * Pure helper for the edge-tap padding feature's Auto-detection heuristic.
 * Deliberately has zero Android imports and does not reference BoardView
 * (which has a static { } block that touches Paint/PorterDuffXfermode at
 * class-load time) so it stays testable under plain JUnit.
 */
object EdgeTapMath {

    const val AUTO_EDGE_PADDING_THRESHOLD_DP: Float = 40f

    @JvmStatic
    fun isPaddingActive(
        mode: EdgeTapPaddingMode,
        cellWidthPx: Float,
        density: Float,
        thresholdDp: Float
    ): Boolean = when (mode) {
        EdgeTapPaddingMode.OFF -> false
        EdgeTapPaddingMode.ON -> true
        EdgeTapPaddingMode.AUTO -> density > 0 && (cellWidthPx / density) < thresholdDp
    }
}
