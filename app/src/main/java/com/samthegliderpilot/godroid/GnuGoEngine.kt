package com.samthegliderpilot.godroid

import java.io.File
import java.io.IOException

/**
 * Runs GnuGo as a subprocess and talks to it over the real GTP text protocol
 * via its stdin/stdout, the same way every GTP-speaking Go GUI talks to
 * GnuGo. Replaces the old JNI bridge: a crash or hang in the engine now only
 * affects this subprocess, not the whole app.
 *
 * Callers are expected to already be off the main thread - this class does
 * its own blocking I/O synchronously, same as the JNI calls it replaces. The
 * actual read/write/stderr-drain loop lives in [SubprocessGoEngine], shared
 * with [PachiEngine]; this class is just that plus GnuGo's own process
 * launch (no data files to extract first, unlike Pachi).
 */
class GnuGoEngine private constructor(process: Process) :
    SubprocessGoEngine("GnuGo", process) {

    companion object {
        private const val EXECUTABLE_NAME = "libgnugo.so"

        @JvmStatic
        @Throws(IOException::class)
        fun start(nativeLibraryDir: String): GnuGoEngine {
            val executable = File(nativeLibraryDir, EXECUTABLE_NAME)
            // GnuGo's own warnings (e.g. "CPU timing unavailable") go to
            // stderr with no trailing newline - merging that into stdout
            // (the GTP protocol stream) can glue a warning onto the next
            // reply and corrupt it. SubprocessGoEngine keeps the streams
            // separate and drains stderr independently so GnuGo never
            // blocks on a full pipe.
            val process = ProcessBuilder(executable.absolutePath).start()
            return GnuGoEngine(process)
        }
    }
}
