package com.samthegliderpilot.godroid

import android.graphics.Point

/**
 * The set of currently-legal moves: written on the gnuGo background thread
 * (via [replaceWith]), read on the UI thread by BoardView's gesture
 * callbacks. The whole set is replaced on every write, never mutated in
 * place, and the backing field is `@Volatile` - together that rules out both
 * a stale-visibility read and a torn read of a set being cleared/refilled
 * out from under a reader on another thread.
 */
class LegalMoves {

    @Volatile
    private var moves: Set<Point> = emptySet()

    fun replaceWith(points: List<Point>?) {
        moves = points?.toHashSet() ?: emptySet()
    }

    fun isEmpty(): Boolean = moves.isEmpty()

    fun contains(point: Point): Boolean = point in moves

    /** An arbitrary legal move, or null if there are none. */
    fun firstOrNull(): Point? = moves.firstOrNull()
}
