package com.samthegliderpilot.godroid;

import org.junit.Test;

import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;

public class EdgeTapMathTest
{
	@Test
	public void isPaddingActive_offAndOnIgnoreGeometry ()
	{
		assertFalse (EdgeTapMath.isPaddingActive (
			EdgeTapPaddingMode.OFF, 20f, 1f, 40f));
		assertTrue (EdgeTapMath.isPaddingActive (
			EdgeTapPaddingMode.ON, 200f, 1f, 40f));
	}

	@Test
	public void isPaddingActive_autoComparesCellWidthDpAgainstThreshold ()
	{
		// cellWidthPx / density = 30dp, below the 40dp threshold -> thin screen.
		assertTrue (EdgeTapMath.isPaddingActive (
			EdgeTapPaddingMode.AUTO, 60f, 2f, 40f));
		// cellWidthPx / density = 50dp, above the threshold -> plenty of room.
		assertFalse (EdgeTapMath.isPaddingActive (
			EdgeTapPaddingMode.AUTO, 100f, 2f, 40f));
	}

	@Test
	public void isPaddingActive_autoCoversA9x9BoardOnAFoldedCoverScreen ()
	{
		// Confirmed live: a Galaxy Z Fold5's cover screen is 968px wide at
		// 420 densityDpi (density 2.625) - a 9x9 board's own cell width
		// there is 968/9/2.625 =~ 41.0dp. That's a real device/board
		// combination this project targets, not a hypothetical - Auto has
		// to cover it. See AUTO_EDGE_PADDING_THRESHOLD_DP's own comment.
		assertTrue (EdgeTapMath.isPaddingActive (EdgeTapPaddingMode.AUTO,
			968f / 9f, 2.625f, EdgeTapMath.AUTO_EDGE_PADDING_THRESHOLD_DP));
	}
}
