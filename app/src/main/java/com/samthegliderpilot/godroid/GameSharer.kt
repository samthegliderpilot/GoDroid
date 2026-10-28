package com.samthegliderpilot.godroid

import android.content.Context
import android.net.Uri
import androidx.core.content.FileProvider
import com.samthegliderpilot.util.AssetsManager
import java.io.File
import java.io.FileInputStream

/**
 * Prepares a just-autosaved game file for sharing: picks a display filename
 * (the game's own, or a fresh date-based one), copies the autosave into the
 * app's private files dir under that name (so `FileProvider` can expose a
 * `content://` Uri for it without touching the real autosave file), and
 * returns that Uri. Split out of `Gtp`'s SHARE_GAME case - the surrounding
 * orchestration (autosave the game first, dispatch the resulting Uri back to
 * `MainActivity`, dismiss the wait spinner) stays in `Gtp`, since that's
 * Handler/MainCommand dispatch plumbing this class has no business knowing
 * about.
 */
class GameSharer(private val mainActivity: MainActivity) {

    fun prepareShareUri(gameInfo: GameInfo, autoSaveGamePathFileName: String): Uri {
        val fileName = gameInfo._sgfFileName?.let { File(it).name }
            ?: mainActivity._saveLoadController.getDateFileName() +
                mainActivity._saveLoadController.sgfFileExtension
        AssetsManager.copyFile(
            FileInputStream(autoSaveGamePathFileName),
            mainActivity.openFileOutput(fileName, Context.MODE_PRIVATE),
        )
        mainActivity.getFileStreamPath(fileName)?.deleteOnExit()
        return FileProvider.getUriForFile(
            mainActivity,
            "com.samthegliderpilot.godroid.fileprovider", // must match manifest `authorities`
            mainActivity.getFileStreamPath(fileName),
        )
    }
}
