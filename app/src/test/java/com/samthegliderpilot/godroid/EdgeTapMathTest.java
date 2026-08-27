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
}
