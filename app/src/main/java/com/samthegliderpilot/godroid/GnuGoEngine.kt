package com.samthegliderpilot.godroid

import android.util.Log
import com.samthegliderpilot.util.Logging.isEnabledFor
import com.samthegliderpilot.util.Logging.log
import java.io.BufferedReader
import java.io.BufferedWriter
import java.io.File
import java.io.IOException
import java.io.InputStreamReader
import java.io.OutputStreamWriter

/**
 * Runs GnuGo as a subprocess and talks to it over the real GTP text protocol
 * via its stdin/stdout, the same way every GTP-speaking Go GUI talks to
 * GnuGo. Replaces the old JNI bridge: a crash or hang in the engine now only
 * affects this subprocess, not the whole app.
 *
 * Callers are expected to already be off the main thread - this class does
 * its own blocking I/O synchronously, same as the JNI calls it replaces.
 */
class GnuGoEngine private constructor(private val process: Process) : GoEngine {

    private val writer: BufferedWriter =
        BufferedWriter(OutputStreamWriter(process.outputStream))
    private val reader: BufferedReader =
        BufferedReader(InputStreamReader(process.inputStream))

    @Synchronized
    override fun sendCommand(command: String): String {
        writer.write(command)
        writer.write("\n")
        writer.flush()

        val response = StringBuilder()
        var line = reader.readLine()
            ?: throw EngineDiedException(command)
        while (line.isNotEmpty()) {
            response.append(line).append('\n')
            line = reader.readLine() ?: break
        }
        return response.toString()
    }

    override fun isAlive(): Boolean = process.isAlive

    override fun shutdown() {
        try {
            sendCommand("quit")
        } catch (ignored: Exception) {
            // Already gone - nothing to clean up on the protocol side.
        }
        process.destroy()
    }

    class EngineDiedException(command: String) :
        RuntimeException("GnuGo process ended while waiting for a response to: $command")

    companion object {
        private const val EXECUTABLE_NAME = "libgnugo.so"

        @JvmStatic
        @Throws(IOException::class)
        fun start(nativeLibraryDir: String): GnuGoEngine {
            val executable = File(nativeLibraryDir, EXECUTABLE_NAME)
            // GnuGo's own warnings (e.g. "CPU timing unavailable") go to
            // stderr with no trailing newline - merging that into stdout
            // (the GTP protocol stream) can glue a warning onto the next
            // reply and corrupt it. Keep the streams separate and drain
            // stderr independently so GnuGo never blocks on a full pipe.
            val process = ProcessBuilder(executable.absolutePath).start()
            startStderrDrain(process)
            return GnuGoEngine(process)
        }

        private fun startStderrDrain(process: Process) {
            Thread({
                BufferedReader(InputStreamReader(process.errorStream)).use { reader ->
                    var line = reader.readLine()
                    while (line != null) {
                        if (isEnabledFor(MainActivity._LOG_TAG, Log.WARN)) {
                            log(MainActivity._LOG_TAG, Log.WARN, "gnugo stderr: '$line'")
                        }
                        line = reader.readLine()
                    }
                }
            }, "GnuGoEngine-stderr").apply {
                isDaemon = true
                start()
            }
        }
    }
}
