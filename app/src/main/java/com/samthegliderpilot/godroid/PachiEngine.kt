package com.samthegliderpilot.godroid

import android.content.Context
import java.io.File
import java.io.IOException

/**
 * Runs Pachi as a subprocess and talks to it over GTP, the same way
 * [GnuGoEngine] does - the actual read/write/stderr-drain loop lives in
 * their shared [SubprocessGoEngine] base; this class is just that plus
 * Pachi's own process launch and data-file setup. This is a plain MCTS/UCT
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
class PachiEngine private constructor(process: Process) :
    SubprocessGoEngine("Pachi", process) {

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
    }
}
