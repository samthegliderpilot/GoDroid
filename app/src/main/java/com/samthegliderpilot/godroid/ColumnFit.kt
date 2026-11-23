package com.samthegliderpilot.godroid

import kotlin.math.max
import kotlin.math.min

/**
 * How the score panel splits its width between columns. Pure arithmetic with no
 * Compose types so it can be unit-tested on the JVM; `ScoreScreen.kt` measures
 * the text and applies the result.
 *
 * The rule: resize the columns first, and only if they genuinely cannot all
 * be made wide enough does text get shrunk (see [TextFit]).
 */
internal object ColumnFit {
    /**
     * Column widths (pixels) for columns whose content is [natural] pixels wide
     * at full size, sharing exactly [available] pixels in total.
     *
     * - Everything fits: columns start out equal, and any column that needs more
     *   than an equal share keeps its natural width, the rest splitting what is
     *   left. When every column is narrow this is simply equal thirds, as before.
     * - It cannot all fit: the widest columns are cut back to one common width
     *   and narrower ones keep their natural width, so no column gives up more
     *   than the widest ones do. A cut-back column's text then shrinks to fit.
     *
     * The returned widths always add up to [available] (unless it is not positive,
     * when [natural] is returned unchanged).
     */
    fun widths(natural: IntArray, available: Int): IntArray {
        if (natural.isEmpty() || available <= 0) {
            return natural.copyOf()
        }
        return if (natural.sum() <= available) {
            growToBaseline(natural, available)
        } else {
            shrinkToFit(natural, available)
        }
    }

    /** Raise the narrow columns to a common baseline; the wide ones keep their size. */
    private fun growToBaseline(natural: IntArray, available: Int): IntArray {
        var low = 0
        var high = available
        while (low < high) {
            val middle = (low + high + 1) / 2
            if (natural.sumOf { max(it, middle) } <= available) low = middle else high = middle - 1
        }
        val result = IntArray(natural.size) { max(natural[it], low) }
        // Whole pixels left over go to the columns that sit at the baseline.
        val atBaseline = natural.indices.filter { natural[it] <= low }
        spreadLeftover(result, available - result.sum(), atBaseline)
        return result
    }

    /** Cut the widest columns back to one common width; narrower ones keep theirs. */
    private fun shrinkToFit(natural: IntArray, available: Int): IntArray {
        var low = 0
        var high = natural.max()
        while (low < high) {
            val middle = (low + high + 1) / 2
            if (natural.sumOf { min(it, middle) } <= available) low = middle else high = middle - 1
        }
        val result = IntArray(natural.size) { min(natural[it], low) }
        val cutBack = natural.indices.filter { natural[it] > low }
        spreadLeftover(result, available - result.sum(), cutBack)
        return result
    }

    private fun spreadLeftover(result: IntArray, leftover: Int, among: List<Int>) {
        if (among.isEmpty()) {
            return
        }
        for (i in 0 until leftover) {
            result[among[i % among.size]]++
        }
    }
}
