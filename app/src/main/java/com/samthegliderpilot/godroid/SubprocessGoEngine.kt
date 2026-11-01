package com.samthegliderpilot.godroid

import android.util.Log
import com.samthegliderpilot.util.Logging.isEnabledFor
import com.samthegliderpilot.util.Logging.log
import java.io.BufferedReader
import java.io.BufferedWriter
import java.io.IOException
import java.io.InputStreamReader
import java.io.OutputStreamWriter

/**
 * Shared [GoEngine] implementation for a subprocess speaking GTP over its own
 * stdin/stdout, with stderr drained independently on its own daemon thread -
 * so the engine never blocks on a full stderr pipe, and (the reason this
 * started mattering) a stray warning there with no trailing newline can
 * never glue onto the next GTP reply on stdout and corrupt it.
 *
 * [GnuGoEngine] and [PachiEngine] are both just this plus their own process
 * launch/data-setup logic - previously two independent, line-for-line
 * identical copies of the read/write loop below. A future fix to it (how a
 * dead process or a short read is detected, how stderr draining handles
 * encoding, etc.) now only has to be made once.
 */
abstract class SubprocessGoEngine protected constructor(
    private val engineName: String,
    private val process: Process,
) : GoEngine {

    private val writer: BufferedWriter =
        BufferedWriter(OutputStreamWriter(process.outputStream))
    private val reader: BufferedReader =
        BufferedReader(InputStreamReader(process.inputStream))

    init {
        startStderrDrain()
    }

    @Synchronized
    override fun sendCommand(command: String): String {
        writer.write(command)
        writer.write("\n")
        writer.flush()

        val response = StringBuilder()
        var line = reader.readLine()
            ?: throw EngineDiedException(engineName, command)
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

    private fun startStderrDrain() {
        Thread({
            try {
                BufferedReader(InputStreamReader(process.errorStream)).use { reader ->
                    var line = reader.readLine()
                    while (line != null) {
                        if (isEnabledFor(MainActivity._LOG_TAG, Log.WARN)) {
                            log(MainActivity._LOG_TAG, Log.WARN, "$engineName stderr: '$line'")
                        }
                        line = reader.readLine()
                    }
                }
            } catch (ignored: IOException) {
                // This thread's only job is draining stderr for logging - once
                // the stream ends, for ANY reason, that job is simply over, so
                // letting the thread end here IS the correct recovery, not a
                // shortcut standing in for one. shutdown()'s process.destroy()
                // closing this stream while blocked in readLine() is one way
                // that happens: it surfaces as an InterruptedIOException
                // instead of readLine() returning null like an ordinary EOF
                // would (confirmed live: left uncaught, it crashed the whole
                // app, since an uncaught exception on any thread kills an
                // Android process by default). Catching it here doesn't hide
                // an engine that died unexpectedly either way - that's
                // surfaced correctly elsewhere, by a real thrown exception on
                // the thread that actually matters: sendCommand's own
                // `readLine() ?: throw EngineDiedException(...)`, the next
                // time anything tries to talk to it. There's also no cleaner
                // way to ask this thread to stop first: it's parked in a
                // blocking read on a plain java.io stream, which only the
                // stream closing (this) or the process dying (ordinary EOF)
                // can ever unblock.
            }
        }, "$engineName-stderr").apply {
            isDaemon = true
            start()
        }
    }

    class EngineDiedException(engineName: String, command: String) :
        RuntimeException("$engineName process ended while waiting for a response to: $command")
}
