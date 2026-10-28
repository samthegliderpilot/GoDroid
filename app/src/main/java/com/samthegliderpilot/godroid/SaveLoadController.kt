package com.samthegliderpilot.godroid

import android.app.Activity
import android.app.AlertDialog
import android.content.Intent
import android.content.SharedPreferences
import android.net.Uri
import android.os.Build
import android.provider.DocumentsContract
import android.provider.OpenableColumns
import android.text.format.DateFormat
import android.util.Log
import androidx.activity.result.ActivityResult
import androidx.activity.result.ActivityResultLauncher
import androidx.activity.result.contract.ActivityResultContracts
import androidx.appcompat.app.AppCompatActivity
import com.samthegliderpilot.util.Logging.isEnabledFor
import com.samthegliderpilot.util.Logging.log
import java.util.Date

/** Java-callable: a plain Kotlin interface SAM-converts cleanly from a Java
 * lambda/method-reference (its `Unit`-returning method erases to `void`),
 * unlike a Kotlin `(GameInfo) -> Unit` function type. */
fun interface BeforeLongOperationListener {
    fun onBeforeLongOperation(gameInfo: GameInfo)
}

/** Java-callable, same reasoning as [BeforeLongOperationListener]. */
fun interface SaveLoadEventListener {
    fun onEvent()
}

/**
 * Save/load a game via the system document picker (Storage Access
 * Framework): save, append, choose-a-new-location, and the matching load
 * flow, plus the "remember where we last saved/loaded" and persisted URI
 * permission bookkeeping that needs. Split out of `MainActivity`.
 *
 * Registers its own [ActivityResultLauncher]s against [activity], so (same
 * timing rule `registerForActivityResult` always has) it must be
 * constructed during the Activity's own initialization - `MainActivity`
 * does this partway through `onCreate`, once `Gtp` and the shared
 * preferences it needs already exist.
 */
class SaveLoadController(
    private val activity: AppCompatActivity,
    private val sharedPreferences: SharedPreferences,
    private val lastSaveLoadUriKey: String,
    private val gtp: Gtp,
    private val gameInfo: () -> GameInfo,
    private val onBeforeLongOperation: BeforeLongOperationListener,
    private val onGameLoaded: SaveLoadEventListener,
    private val onShowCollectionList: SaveLoadEventListener,
) {
    private val saveDocumentLauncher: ActivityResultLauncher<Intent> =
        activity.registerForActivityResult(ActivityResultContracts.StartActivityForResult(), ::onSaveDocumentResult)

    private val openDocumentLauncher: ActivityResultLauncher<Intent> =
        activity.registerForActivityResult(ActivityResultContracts.StartActivityForResult(), ::onOpenDocumentResult)

    val sgfFileExtension: String
        get() = activity.resources.getString(R.string.sgfFileExtension)

    fun launchSaveGamePicker() {
        // A file this game was already saved to or loaded from exists - offer
        // overwriting it, appending as an additional game in the same file, or
        // picking a different location, instead of always re-prompting a fresh
        // picker. Overwrite is withheld when the source is already a multi-game
        // collection, so a careless tap can't silently discard the other games.
        if (gameInfo()._sgfFileName != null) {
            showSaveChoiceDialog()
        } else {
            launchSaveGamePickerNewLocation()
        }
    }

    fun launchLoadGamePicker() {
        if (gameInfo()._isCollection) {
            onShowCollectionList.onEvent()
            return
        }
        val intent = Intent(Intent.ACTION_OPEN_DOCUMENT).apply {
            addCategory(Intent.CATEGORY_OPENABLE)
            type = "*/*"
            putExtra(Intent.EXTRA_MIME_TYPES, arrayOf("application/x-go-sgf", "text/plain"))
        }
        addInitialUriHint(intent)
        openDocumentLauncher.launch(intent)
    }

    private fun showSaveChoiceDialog() {
        val info = gameInfo()
        val options = mutableListOf<CharSequence>()
        val actions = mutableListOf<() -> Unit>()
        if (!info._isCollection) {
            options += activity.getString(R.string.saveOverwriteOption)
            actions += ::gtpSaveGame
        }
        options += activity.getString(R.string.saveAppendOption)
        actions += ::gtpAppendGame
        options += activity.getString(R.string.saveChooseNewLocationOption)
        actions += ::launchSaveGamePickerNewLocation
        AlertDialog.Builder(activity)
            .setTitle(R.string.menuSaveLabel)
            .setItems(options.toTypedArray()) { _, which -> actions[which]() }
            .show()
    }

    private fun launchSaveGamePickerNewLocation() {
        val suggestedName = gameInfo()._sgfDisplayName ?: getDateFileName()
        val intent = Intent(Intent.ACTION_CREATE_DOCUMENT).apply {
            addCategory(Intent.CATEGORY_OPENABLE)
            type = "application/x-go-sgf"
            putExtra(Intent.EXTRA_TITLE, suggestedName + sgfFileExtension)
        }
        addInitialUriHint(intent)
        saveDocumentLauncher.launch(intent)
    }

    private fun onSaveDocumentResult(result: ActivityResult) {
        if (result.resultCode != Activity.RESULT_OK) return
        val uri = result.data?.data ?: return
        takePersistablePermission(uri, writable = true)
        rememberLastSaveLoadUri(uri)
        val info = gameInfo()
        info._sgfFileName = uri.toString()
        info._sgfDisplayName = queryDisplayName(uri)
        gtpSaveGame()
    }

    private fun onOpenDocumentResult(result: ActivityResult) {
        if (result.resultCode != Activity.RESULT_OK) return
        val uri = result.data?.data ?: return
        takePersistablePermission(uri, writable = false)
        rememberLastSaveLoadUri(uri)
        onGameLoaded.onEvent()
        val info = gameInfo()
        info._sgfFileName = uri.toString()
        info._sgfDisplayName = queryDisplayName(uri)
        gtp.loadGame(info, GameInfo._DEFAULT_GAME_COLLECTION_IDX)
    }

    private fun gtpSaveGame() {
        val info = gameInfo()
        onBeforeLongOperation.onBeforeLongOperation(info)
        gtp.saveGame(info)
    }

    private fun gtpAppendGame() {
        val info = gameInfo()
        onBeforeLongOperation.onBeforeLongOperation(info)
        gtp.appendGame(info)
    }

    private fun takePersistablePermission(uri: Uri, writable: Boolean) {
        try {
            var flags = Intent.FLAG_GRANT_READ_URI_PERMISSION
            if (writable) flags = flags or Intent.FLAG_GRANT_WRITE_URI_PERMISSION
            activity.contentResolver.takePersistableUriPermission(uri, flags)
        } catch (e: Exception) {
            if (isEnabledFor(MainActivity._LOG_TAG, Log.INFO)) {
                log(MainActivity._LOG_TAG, Log.INFO, "failed to persist URI permission for '$uri': '$e'")
            }
        }
    }

    private fun addInitialUriHint(intent: Intent) {
        if (Build.VERSION.SDK_INT < Build.VERSION_CODES.O) return
        val lastUriString = sharedPreferences.getString(lastSaveLoadUriKey, null) ?: return
        try {
            intent.putExtra(DocumentsContract.EXTRA_INITIAL_URI, Uri.parse(lastUriString))
        } catch (ignored: Exception) {
        }
    }

    private fun rememberLastSaveLoadUri(uri: Uri) {
        sharedPreferences.edit().putString(lastSaveLoadUriKey, uri.toString()).commit()
    }

    private fun queryDisplayName(uri: Uri): String {
        try {
            activity.contentResolver.query(
                uri, arrayOf(OpenableColumns.DISPLAY_NAME), null, null, null
            )?.use { cursor ->
                if (cursor.moveToFirst()) {
                    val name = cursor.getString(0)
                    if (name != null) {
                        return name.removeSuffix(sgfFileExtension)
                    }
                }
            }
        } catch (e: Exception) {
            if (isEnabledFor(MainActivity._LOG_TAG, Log.INFO)) {
                log(MainActivity._LOG_TAG, Log.INFO, "failed to query display name for '$uri': '$e'")
            }
        }
        return getDateFileName()
    }

    fun getDateFileName(): String {
        val now = Date()
        val formatted = DateFormat.getDateFormat(activity).format(now) + " " +
            DateFormat.getTimeFormat(activity).format(now)
        return formatted.replace(Regex("[ /:*?\"<>|\\\\]"), "_")
    }
}
