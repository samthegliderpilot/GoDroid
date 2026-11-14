package com.samthegliderpilot.godroid

/**
 * Pure helper for the edge-tap padding feature's Auto-detection heuristic.
 * Deliberately has zero Android imports and does not reference BoardView
 * (which has a static { } block that touches Paint/PorterDuffXfermode at
 * class-load time) so it stays testable under plain JUnit.
 */
object EdgeTapMath {

    // Confirmed live on a Galaxy Z Fold5's cover screen (968x2376px @ 420
    // densityDpi -> 368.8dp wide): a 9x9 board's own cell width there is
    // ~41.0dp, just over the old 40dp cutoff, so Auto never kicked in on
    // exactly the board size (fewest, widest cells) and screen (narrowest
    // real one this project targets) that needed it most. 44dp clears that
    // with a few dp of margin instead of sitting right on the boundary.
    const val AUTO_EDGE_PADDING_THRESHOLD_DP: Float = 44f

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
