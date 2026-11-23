package com.samthegliderpilot.godroid

import org.junit.Assert.assertEquals
import org.junit.Test

/**
 * Covers [TextFit.scaleFor], the arithmetic that decides how far a label in the
 * score panel is shrunk so it stays on one line. The text measuring itself needs
 * Compose and is checked on a device; this keeps the sizing rule from drifting.
 */
class TextFitTest {

    @Test
    fun `text that already fits is left at full size`() {
        // A label narrower than its column must not be touched, or every
        // English label would change for no reason.
        assertEquals(1f, TextFit.scaleFor(naturalWidthPx = 200, maxWidthPx = 300), 0f)
        assertEquals(1f, TextFit.scaleFor(naturalWidthPx = 300, maxWidthPx = 300), 0f)
    }

    @Test
    fun `text that is too wide is scaled by the ratio`() {
        // "Prisonniers" in a narrow column: 300px wide, 200px available -> 2/3.
        assertEquals(200f / 300f, TextFit.scaleFor(naturalWidthPx = 300, maxWidthPx = 200), 0.0001f)
    }

    @Test
    fun `scaling never goes below the minimum`() {
        // A pathologically long string must not shrink into unreadable specks;
        // past the floor the caller ellipsizes instead.
        assertEquals(0.5f, TextFit.scaleFor(naturalWidthPx = 1000, maxWidthPx = 100), 0f)
        assertEquals(0.7f, TextFit.scaleFor(naturalWidthPx = 1000, maxWidthPx = 100, minScale = 0.7f), 0f)
    }

    @Test
    fun `degenerate sizes are treated as nothing to fit`() {
        // No measured width or no room (e.g. before the first layout pass) must
        // not produce a zero or negative scale.
        assertEquals(1f, TextFit.scaleFor(naturalWidthPx = 0, maxWidthPx = 100), 0f)
        assertEquals(1f, TextFit.scaleFor(naturalWidthPx = 100, maxWidthPx = 0), 0f)
        assertEquals(1f, TextFit.scaleFor(naturalWidthPx = -5, maxWidthPx = -5), 0f)
    }
}
