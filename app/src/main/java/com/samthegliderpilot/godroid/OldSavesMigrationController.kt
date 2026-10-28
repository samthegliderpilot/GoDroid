package com.samthegliderpilot.godroid

import android.app.Activity
import android.app.AlertDialog
import android.content.Intent
import android.content.SharedPreferences
import android.net.Uri
import android.provider.DocumentsContract
import android.util.Log
import androidx.activity.result.ActivityResult
import androidx.activity.result.ActivityResultLauncher
import androidx.activity.result.contract.ActivityResultContracts
import com.samthegliderpilot.util.Logging.isEnabledFor
import com.samthegliderpilot.util.Logging.log
import java.io.File
import java.io.FileInputStream

/**
 * Offers to copy any pre-SAF (Storage Access Framework) legacy saves - from
 * the app's own external-files directory, which newer Android versions and
 * file managers can't see - into a folder the user picks via the system
 * document picker. The originals are never touched. Split out of
 * `MainActivity`, same dependency shape as `GameSharer`.
 *
 * Registers its own [ActivityResultLauncher] against [mainActivity], so (same
 * timing rule `registerForActivityResult` always has) it must be constructed
 * during the Activity's own initialization - `MainActivity` does this
 * alongside `SaveLoadController`, partway through `onCreate`.
 */
class OldSavesMigrationController(
    private val mainActivity: MainActivity,
    private val sharedPreferences: SharedPreferences,
    private val dismissedKey: String,
    private val sgfFileExtension: String,
) {
    private val migrationFolderLauncher: ActivityResultLauncher<Intent> =
        mainActivity.registerForActivityResult(
            ActivityResultContracts.StartActivityForResult(), ::onMigrationFolderResult)

    private var oldSavesOffered = false

    fun offerMigration() {
        if (oldSavesOffered || sharedPreferences.getBoolean(dismissedKey, false)) {
            return
        }
        oldSavesOffered = true
        val oldSaves = findOldSaves()
        if (oldSaves.isEmpty()) {
            return
        }
        AlertDialog.Builder(mainActivity)
            .setMessage(mainActivity.getString(R.string.migrateOldSavesMessage, oldSaves.size))
            .setPositiveButton(R.string.migrateOldSavesChooseFolder) { _, _ -> launchMigrationFolderPicker() }
            .setNegativeButton(R.string.migrateOldSavesNotNow, null)
            .setNeutralButton(R.string.migrateOldSavesDontAskAgain) { _, _ -> markMigrationDismissed() }
            .show()
    }

    private fun findOldSaves(): Array<File> {
        val baseDir = mainActivity.getExternalFilesDir(null) ?: return emptyArray()
        val files = File(baseDir, "GoDroid").listFiles { _, name -> name.endsWith(sgfFileExtension) }
        return files ?: emptyArray()
    }

    private fun markMigrationDismissed() {
        sharedPreferences.edit().putBoolean(dismissedKey, true).commit()
    }

    private fun launchMigrationFolderPicker() {
        val intent = Intent(Intent.ACTION_OPEN_DOCUMENT_TREE).apply {
            addFlags(Intent.FLAG_GRANT_READ_URI_PERMISSION or Intent.FLAG_GRANT_WRITE_URI_PERMISSION)
        }
        migrationFolderLauncher.launch(intent)
    }

    private fun onMigrationFolderResult(result: ActivityResult) {
        if (result.resultCode != Activity.RESULT_OK) {
            return
        }
        val treeUri = result.data?.data ?: return
        val oldSaves = findOldSaves()
        Thread {
            val copied = copyOldSaves(oldSaves, treeUri)
            mainActivity.runOnUiThread {
                // Only stop asking once everything made it across, so a partial
                // failure is offered again on the next launch.
                if (copied == oldSaves.size) {
                    markMigrationDismissed()
                }
                mainActivity.showMessage(
                    mainActivity.getString(R.string.migrateOldSavesDone, copied, oldSaves.size))
            }
        }.start()
    }

    private fun copyOldSaves(files: Array<File>, treeUri: Uri): Int {
        val resolver = mainActivity.contentResolver
        val parentUri = DocumentsContract.buildDocumentUriUsingTree(
            treeUri, DocumentsContract.getTreeDocumentId(treeUri))
        val buffer = ByteArray(8192)
        var copied = 0
        for (file in files) {
            try {
                val targetUri = DocumentsContract.createDocument(
                    resolver, parentUri, "application/x-go-sgf", file.name)
                    ?: throw Exception("provider refused to create the file")
                FileInputStream(file).use { input ->
                    resolver.openOutputStream(targetUri, "wt")?.use { output ->
                        var numBytes: Int
                        while (input.read(buffer).also { numBytes = it } != -1) {
                            output.write(buffer, 0, numBytes)
                        }
                    }
                }
                copied++
            } catch (e: Exception) {
                if (isEnabledFor(MainActivity._LOG_TAG, Log.INFO)) {
                    log(MainActivity._LOG_TAG, Log.INFO, "failed to copy old save '$file': '$e'")
                }
            }
        }
        return copied
    }
}
