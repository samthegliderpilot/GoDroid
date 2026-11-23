package com.samthegliderpilot.godroid

/**
 * The arithmetic behind the score panel's shrink-to-fit text. Kept free of any
 * Compose types so it can be unit-tested on the JVM; `ScoreScreen.kt` does the
 * actual text measuring and applies the result.
 */
internal object TextFit {
    /** Never shrink below this fraction of the original size: past it the text is
     * too small to read and an ellipsis is the better failure. */
    const val DEFAULT_MIN_SCALE = 0.5f

    /**
     * The fraction of the original text size to use so a line that measures
     * [naturalWidthPx] wide at full size fits in [maxWidthPx]: 1 when it already
     * fits (or there is nothing sensible to fit it into), otherwise the ratio,
     * but never below [minScale].
     */
    fun scaleFor(
        naturalWidthPx: Int,
        maxWidthPx: Int,
        minScale: Float = DEFAULT_MIN_SCALE,
    ): Float {
        if (naturalWidthPx <= 0 || maxWidthPx <= 0 || naturalWidthPx <= maxWidthPx) {
            return 1f
        }
        return (maxWidthPx.toFloat() / naturalWidthPx).coerceIn(minScale, 1f)
    }
}
