package com.samthegliderpilot.godroid

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
            val process = ProcessBuilder(executable.absolutePath)
                .redirectErrorStream(true)
                .start()
            return GnuGoEngine(process)
        }
    }
}
