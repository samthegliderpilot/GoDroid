package com.samthegliderpilot.godroid;

/**
 * Pure helper for the edge-tap padding feature's Auto-detection heuristic.
 * Deliberately has zero Android imports and does not reference BoardView
 * (which has a static { } block that touches Paint/PorterDuffXfermode at
 * class-load time) so it stays testable under plain JUnit.
 */
public
class EdgeTapMath
{
static final
float AUTO_EDGE_PADDING_THRESHOLD_DP = 40f;

static
boolean isPaddingActive (
	final EdgeTapPaddingMode pMode,
	final float pCellWidthPx,
	final float pDensity,
	final float pThresholdDp
	)
{
	switch (pMode)
	{
	case OFF:
		return false;
	case ON:
		return true;
	default:
		return pDensity > 0 && (pCellWidthPx / pDensity) < pThresholdDp;
	}
}
}
