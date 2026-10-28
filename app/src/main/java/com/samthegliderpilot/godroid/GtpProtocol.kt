package com.samthegliderpilot.godroid

import android.graphics.Point
import java.util.StringTokenizer

/**
 * Pure GTP (Go Text Protocol) text handling: reply cleanup and vertex/point
 * conversion, with no I/O, no Handler/threading, nothing Gtp.java's dispatch
 * logic depends on. Split out so this logic is unit-testable on its own -
 * `cleanReply` in particular is what the GnuGo stdout-corruption crash
 * (2026-10-25) ran through unexamined for months.
 */
object GtpProtocol {

    private const val POSITION_LETTERS = "ABCDEFGHJKLMNOPQRST"
    private val POSITION_LETTERS_CHARS = POSITION_LETTERS.toCharArray()

    /**
     * Strips a raw GTP reply down to its payload: the leading "= " success
     * marker, and the single trailing newline GnuGoEngine appends after
     * every line it reads (internal line breaks in multi-line replies like
     * showboard are left intact). A null, empty, or error ("?"-prefixed)
     * reply becomes "".
     */
    @JvmStatic
    fun cleanReply(rawReply: String?): String {
        val reply = rawReply?.replaceFirst("= ", "")?.removeSuffix("\n").orEmpty()
        return reply.takeUnless { it.isEmpty() || it[0] == '?' } ?: ""
    }

    /** A GTP vertex like "C5" -> board coordinates, or null for a null vertex. */
    @JvmStatic
    fun vertex2Point(vertex: String?, boardSize: Int): Point? = vertex?.let {
        Point(POSITION_LETTERS.indexOf(it[0]), boardSize - it.substring(1).toInt())
    }

    /**
     * Whitespace-separated GTP vertices -> board coordinates. Returns a real
     * `ArrayList`, not `buildList { }`'s result - Java callers (`Gtp.java`'s
     * `removeDeadStones`/`DRAW_BOARD` handling) `.remove()`/`.addAll()` onto
     * this, and `buildList`'s backing `ListBuilder` throws
     * `UnsupportedOperationException` on any mutation after `build()`, which
     * Java's `List` interface gives no compile-time warning about.
     */
    @JvmStatic
    fun verteces2Points(vertices: String?, boardSize: Int): List<Point> {
        vertices ?: return ArrayList()
        val tokens = StringTokenizer(vertices, " \n")
        val points = ArrayList<Point>()
        while (tokens.hasMoreTokens()) {
            vertex2Point(tokens.nextToken(), boardSize)?.let(points::add)
        }
        return points
    }

    /** Board coordinates -> a GTP vertex like "C5", or null for a pass/null point. */
    @JvmStatic
    fun point2Vertex(point: Point?, boardSize: Int): String? {
        if (point == null || point is GameInfo.Passed) return null
        return "${POSITION_LETTERS_CHARS[point.x]}${boardSize - point.y}"
    }
}
