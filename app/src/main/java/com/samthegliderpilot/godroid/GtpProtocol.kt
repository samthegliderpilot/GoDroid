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
    /** The result of [splitDeadStones]. */
    class DeadStoneSplit<T>(
        val blackDead: MutableList<T>,
        val whiteDead: MutableList<T>,
        /** Points an engine called dead that hold no stone of either color. */
        val notStones: MutableList<T>,
    )

    /**
     * Sorts the points an engine named in `final_status_list dead` into black and
     * white dead stones, using the referee's own stone lists. A point that holds no
     * stone of either color is NOT a dead stone - an engine whose board has drifted
     * from the real game can name one (a stone it still has where one was captured) -
     * so it is returned separately instead of being counted as a white stone, which
     * is what used to inflate the score.
     */
    @JvmStatic
    fun <T> splitDeadStones(
        dead: List<T>,
        blackStones: Collection<T>,
        whiteStones: Collection<T>,
    ): DeadStoneSplit<T> {
        val split = DeadStoneSplit<T>(ArrayList(), ArrayList(), ArrayList())
        for (point in dead) {
            when {
                blackStones.contains(point) -> split.blackDead.add(point)
                whiteStones.contains(point) -> split.whiteDead.add(point)
                else -> split.notStones.add(point)
            }
        }
        return split
    }

    @JvmStatic
    fun cleanReply(rawReply: String?): String {
        val reply = rawReply?.replaceFirst("= ", "")?.removeSuffix("\n").orEmpty()
        return reply.takeUnless { it.isEmpty() || it[0] == '?' } ?: ""
    }

    /**
     * Whether a raw GTP reply is an error ("?"-prefixed) rather than success
     * ("="-prefixed) - [cleanReply] can't answer this on its own, since it
     * strips a real error down to the same "" as an ordinary no-data success
     * reply (e.g. `play`'s). Needed wherever a command's success/failure
     * itself matters, not just its payload - see `Gtp.gtpCommandSucceeded`.
     */
    @JvmStatic
    fun isError(rawReply: String?): Boolean = rawReply?.trimStart()?.startsWith("?") ?: true

    /**
     * A GTP vertex like "C5" -> board coordinates, or null for a null vertex
     * - or anything else that doesn't actually parse as one. Different GTP
     * engines don't agree on exact spelling for everything (GnuGo replies
     * "PASS" to genmove, Pachi replies "pass" - a real crash this hit once,
     * parsing "ass" as a row number), so this can't assume its input is
     * always a well-formed vertex; callers decide what an unparsable one
     * means for them (see `Gtp.java`'s own genmove-reply handling) instead
     * of this throwing. Also rejects a vertex that parses fine but names a
     * cell outside this actual board (column/row from a bigger board than
     * boardSize, or row 0/negative) - chased as a candidate for a stray
     * mark drawn near A9 on one finished 9x9 game (see Gtp.score()'s own
     * comment for what that actually turned out to be: a drawing-coordinate
     * bug, not a bad vertex). Keeping this bounds check anyway - a vertex
     * genuinely outside the board it was queried against is never valid
     * regardless of what produced it, and the drawing code should never
     * have to cope with an out-of-bounds Point at all.
     */
    @JvmStatic
    fun vertex2Point(vertex: String?, boardSize: Int): Point? {
        if (vertex.isNullOrEmpty()) return null
        val column = POSITION_LETTERS.indexOf(vertex[0])
        val row = vertex.substring(1).toIntOrNull()
        if (column < 0 || column >= boardSize || row == null
            || row < 1 || row > boardSize) return null
        return Point(column, boardSize - row)
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
