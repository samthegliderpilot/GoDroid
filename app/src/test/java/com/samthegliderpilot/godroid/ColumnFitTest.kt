package com.samthegliderpilot.godroid

import org.junit.Assert.assertArrayEquals
import org.junit.Assert.assertEquals
import org.junit.Test

/**
 * Covers [ColumnFit.widths], the rule for splitting the score panel's width
 * between its columns: resize the columns first, and only when they cannot
 * all be made wide enough do the widest ones get cut back (and their text
 * shrunk). The text measuring needs Compose and is checked on a device; this
 * keeps the arithmetic honest.
 */
class ColumnFitTest {

    @Test
    fun `when everything is narrow the columns are equal`() {
        // The common (English) case must look exactly as it did with three
        // equal-weight columns: no column needs more than a third.
        assertArrayEquals(
            intArrayOf(300, 300, 300),
            ColumnFit.widths(intArrayOf(100, 90, 90), available = 900),
        )
    }

    @Test
    fun `a column that needs more than a third takes it from the others`() {
        // A long French label: it keeps its natural width, and the two narrow
        // columns share what is left equally.
        assertArrayEquals(
            intArrayOf(500, 200, 200),
            ColumnFit.widths(intArrayOf(500, 90, 90), available = 900),
        )
    }

    @Test
    fun `when it cannot all fit the widest column is cut back and narrow ones keep their size`() {
        // 1000px of content in 600px: the big column gives up the shortfall; the
        // two small ones are left alone so their text is not shrunk needlessly.
        assertArrayEquals(
            intArrayOf(400, 100, 100),
            ColumnFit.widths(intArrayOf(800, 100, 100), available = 600),
        )
    }

    @Test
    fun `when several columns are too wide they are cut back to the same width`() {
        assertArrayEquals(
            intArrayOf(300, 300, 300),
            ColumnFit.widths(intArrayOf(500, 400, 300), available = 900),
        )
    }

    @Test
    fun `the widths always add up to the space available`() {
        // Whole pixels left over by the integer maths must not be lost, or the
        // grid would be a pixel or two short of the panel's width.
        val cases = listOf(
            intArrayOf(100, 90, 90) to 901,
            intArrayOf(500, 90, 90) to 899,
            intArrayOf(800, 100, 100) to 601,
            intArrayOf(500, 400, 300) to 1000,
            intArrayOf(0, 0, 0) to 7,
            intArrayOf(1, 1, 1) to 2,
        )
        for ((natural, available) in cases) {
            assertEquals(
                "natural=${natural.toList()} available=$available",
                available,
                ColumnFit.widths(natural, available).sum(),
            )
        }
    }

    @Test
    fun `no column is ever given less than nothing and each cut is within its natural width`() {
        val natural = intArrayOf(800, 100, 100)
        val result = ColumnFit.widths(natural, available = 250)
        for (i in natural.indices) {
            assertEquals(true, result[i] >= 0)
            assertEquals(true, result[i] <= natural[i] || natural.sum() <= 250)
        }
    }

    @Test
    fun `degenerate input is returned unchanged`() {
        // No room (before the first layout pass) or no columns must not divide
        // by zero or invent widths.
        assertArrayEquals(intArrayOf(10, 20), ColumnFit.widths(intArrayOf(10, 20), available = 0))
        assertArrayEquals(intArrayOf(), ColumnFit.widths(intArrayOf(), available = 500))
    }
}
