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
}
