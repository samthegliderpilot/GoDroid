package com.samthegliderpilot.godroid

import org.junit.Assert.assertEquals
import org.junit.Test

/**
 * Only [GtpProtocol.cleanReply] is covered here - it's pure String logic with
 * no Android dependency. `vertex2Point`/`point2Vertex`/`verteces2Points` use
 * `android.graphics.Point`, which the plain unit-test classpath stubs out
 * (every method throws); this module has no Robolectric/instrumentation
 * setup to back a real `Point`, so those three are left to manual/on-device
 * verification for now rather than silently adding a new test dependency.
 */
class GtpProtocolTest {

    @Test
    fun `cleanReply strips the success marker and one trailing newline`() {
        assertEquals("F4", GtpProtocol.cleanReply("= F4\n"))
    }

    @Test
    fun `cleanReply keeps internal line breaks in multi-line replies`() {
        // showboard's reply has its own newlines between rows - only the
        // one GnuGoEngine appends after the whole reply should go.
        assertEquals(
            "   A B C\n 1 . . .\n 2 . . .",
            GtpProtocol.cleanReply("=    A B C\n 1 . . .\n 2 . . .\n"),
        )
    }

    @Test
    fun `cleanReply turns a null, empty, or error reply into an empty string`() {
        assertEquals("", GtpProtocol.cleanReply(null))
        assertEquals("", GtpProtocol.cleanReply(""))
        assertEquals("", GtpProtocol.cleanReply("? unacceptable move\n"))
    }

    // splitDeadStones is generic, so it is tested here with plain strings (the real
    // code passes android.graphics.Point, which the unit-test classpath cannot use).

    @Test
    fun `splitDeadStones separates black and white dead stones`() {
        val split = GtpProtocol.splitDeadStones(
            dead = listOf("D4", "H8"),
            blackStones = listOf("D4", "A1"),
            whiteStones = listOf("H8", "J9"),
        )
        assertEquals(listOf("D4"), split.blackDead)
        assertEquals(listOf("H8"), split.whiteDead)
        assertEquals(emptyList<String>(), split.notStones)
    }

    @Test
    fun `splitDeadStones does not treat an empty point as a dead white stone`() {
        // Regression: a live Pachi, replayed into without clearing its board, still had
        // stones where earlier captures had emptied G4 and G5, and named them in
        // final_status_list dead. They hold no stone in the real game, and counting them as
        // dead WHITE stones (the old behaviour) credited black for stones that were never
        // there - the score row came out wrong while the engine's own W+8.5 was right.
        val split = GtpProtocol.splitDeadStones(
            dead = listOf("G4", "G5"),
            blackStones = listOf("G9", "F8"),
            whiteStones = listOf("H8", "H7"),
        )
        assertEquals(emptyList<String>(), split.blackDead)
        assertEquals(emptyList<String>(), split.whiteDead)
        assertEquals(listOf("G4", "G5"), split.notStones)
    }

    @Test
    fun `splitDeadStones keeps real dead stones when empty points are mixed in`() {
        val split = GtpProtocol.splitDeadStones(
            dead = listOf("H8", "G4", "H7"),
            blackStones = emptyList(),
            whiteStones = listOf("H8", "H7"),
        )
        assertEquals(listOf("H8", "H7"), split.whiteDead)
        assertEquals(listOf("G4"), split.notStones)
    }
}
