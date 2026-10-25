package com.samthegliderpilot.godroid

import androidx.appcompat.app.AppCompatActivity
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.SegmentedButton
import androidx.compose.material3.SegmentedButtonDefaults
import androidx.compose.material3.SingleChoiceSegmentedButtonRow
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.rememberCoroutineScope
import androidx.compose.ui.Modifier
import androidx.compose.ui.res.stringResource
import androidx.compose.ui.unit.dp
import androidx.compose.ui.platform.ComposeView
import androidx.compose.ui.platform.ViewCompositionStrategy
import androidx.appcompat.app.AlertDialog
import kotlinx.coroutines.launch

/** Java-callable single-method listener - a plain Kotlin interface SAM-converts cleanly
 * from a Java lambda, unlike a Kotlin `(EdgeTapPaddingMode) -> Unit` function type. */
interface EdgeTapPaddingModeListener {
    fun onEdgeTapPaddingModeChanged(mode: EdgeTapPaddingMode)
}

private fun labelFor(mode: EdgeTapPaddingMode): Int = when (mode) {
    EdgeTapPaddingMode.OFF -> R.string.edgeTapPaddingOff
    EdgeTapPaddingMode.ON -> R.string.edgeTapPaddingOn
    EdgeTapPaddingMode.AUTO -> R.string.edgeTapPaddingAuto
}

@Composable
fun AppPreferencesScreen(
    currentMode: EdgeTapPaddingMode,
    onModeSelected: (EdgeTapPaddingMode) -> Unit
) {
    Column(modifier = Modifier.padding(16.dp)) {
        Text(
            text = stringResource(R.string.edgeTapPaddingLabel),
            style = MaterialTheme.typography.titleMedium
        )
        Spacer(modifier = Modifier.height(12.dp))
        val options = EdgeTapPaddingMode.values()
        SingleChoiceSegmentedButtonRow {
            options.forEachIndexed { index, mode ->
                SegmentedButton(
                    selected = mode == currentMode,
                    onClick = { onModeSelected(mode) },
                    shape = SegmentedButtonDefaults.itemShape(index = index, count = options.size)
                ) {
                    Text(stringResource(labelFor(mode)))
                }
            }
        }
    }
}

/**
 * Replaces the old `display_settings.xml` AlertDialog: same dismissal semantics (back
 * press / outside tap, no explicit buttons), same live-apply-on-change behavior, just a
 * Compose-hosted control instead of a single inflated Spinner.
 */
fun showAppPreferencesDialog(
    activity: AppCompatActivity,
    settingsDataStore: SettingsDataStore,
    listener: EdgeTapPaddingModeListener
) {
    val composeView = ComposeView(activity).apply {
        setViewCompositionStrategy(ViewCompositionStrategy.DisposeOnDetachedFromWindow)
        setContent {
            GoDroidTheme {
                val scope = rememberCoroutineScope()
                val currentMode by settingsDataStore.edgeTapPaddingMode.collectAsState(
                    initial = EdgeTapPaddingMode.AUTO
                )
                AppPreferencesScreen(
                    currentMode = currentMode,
                    onModeSelected = { mode ->
                        scope.launch { settingsDataStore.setEdgeTapPaddingMode(mode) }
                        listener.onEdgeTapPaddingModeChanged(mode)
                    }
                )
            }
        }
    }
    val dialog = AlertDialog.Builder(activity)
        .setTitle(R.string.menuDisplaySettingsLabel)
        .setView(composeView)
        .create()
    dialog.attachComposeOwners(activity)
    dialog.show()
}
