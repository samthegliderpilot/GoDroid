package com.samthegliderpilot.godroid

import android.content.Context
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
 * Runs Pachi as a subprocess and talks to it over GTP, the same way
 * [GnuGoEngine] does - see that class for the shared rationale (subprocess
 * over JNI, the `libpachi.so` packaging trick). This is a plain MCTS/UCT
 * build (DCNN and JOSEKIFIX compiled out - see `patches/pachi/Android.mk`),
 * so with no command-line flags Pachi's own `main()` already runs exactly
 * the GTP-over-stdio loop this needs - unlike GnuGo, no custom minimal
 * `main.c` was needed to bypass its other CLI modes.
 *
 * Pachi looks in its current working directory first for its data files
 * (`patterns_mm.gamma`/`patterns_mm.spat`/`joseki19.gtp` - confirmed in its
 * own `util.c`), so [start] extracts them from the app's assets into a
 * dedicated directory and launches the process there - simpler than setting
 * a `DATA_DIR` environment variable, and ~1MB is cheap enough to just always
 * re-extract on each engine start rather than tracking whether it's stale.
 */
class PachiEngine private constructor(private val process: Process) : GoEngine {

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
        RuntimeException("Pachi process ended while waiting for a response to: $command")

    companion object {
        private const val EXECUTABLE_NAME = "libpachi.so"
        private val DATA_FILES =
            listOf("patterns_mm.gamma", "patterns_mm.spat", "joseki19.gtp")

        @JvmStatic
        @Throws(IOException::class)
        fun start(context: Context): PachiEngine {
            val executable = File(context.applicationInfo.nativeLibraryDir, EXECUTABLE_NAME)
            // No thread-count argument - Pachi's own default (one worker per
            // CPU core) is fine. A native SIGSEGV on the first genmove was
            // briefly suspected to be a threading bug and tested with
            // threads=1 forced here; it reproduced identically single-
            // threaded and turned out to be an unrelated memory-corruption
            // bug, now fixed at the source level (see patches/pachi/
            // Android.mk's EXTRA_CHECKS comment) - this was never actually
            // the fix, just a (wrong) diagnostic step.
            val process = ProcessBuilder(executable.absolutePath)
                .directory(extractDataFiles(context))
                .start()
            startStderrDrain(process)
            return PachiEngine(process)
        }

        private fun extractDataFiles(context: Context): File {
            val dataDir = File(context.filesDir, "pachi")
            dataDir.mkdirs()
            for (name in DATA_FILES) {
                context.assets.open("pachi/$name").use { input ->
                    File(dataDir, name).outputStream().use { output -> input.copyTo(output) }
                }
            }
            return dataDir
        }

        private fun startStderrDrain(process: Process) {
            Thread({
                BufferedReader(InputStreamReader(process.errorStream)).use { reader ->
                    var line = reader.readLine()
                    while (line != null) {
                        if (isEnabledFor(MainActivity._LOG_TAG, Log.WARN)) {
                            log(MainActivity._LOG_TAG, Log.WARN, "pachi stderr: '$line'")
                        }
                        line = reader.readLine()
                    }
                }
            }, "PachiEngine-stderr").apply {
                isDaemon = true
                start()
            }
        }
    }
}
