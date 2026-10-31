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
import androidx.compose.material3.Surface
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

/** Java-callable, same reasoning as [EdgeTapPaddingModeListener]. */
interface ShowCoordinatesListener {
    fun onShowCoordinatesChanged(show: Boolean)
}

/** Java-callable, same reasoning as [EdgeTapPaddingModeListener]. */
interface ClockEnabledListener {
    fun onClockEnabledChanged(enabled: Boolean)
}

private fun labelFor(mode: EdgeTapPaddingMode): Int = when (mode) {
    EdgeTapPaddingMode.OFF -> R.string.edgeTapPaddingOff
    EdgeTapPaddingMode.ON -> R.string.edgeTapPaddingOn
    EdgeTapPaddingMode.AUTO -> R.string.edgeTapPaddingAuto
}

@Composable
fun AppPreferencesScreen(
    currentMode: EdgeTapPaddingMode,
    onModeSelected: (EdgeTapPaddingMode) -> Unit,
    showCoordinates: Boolean,
    onShowCoordinatesSelected: (Boolean) -> Unit,
    clockEnabled: Boolean,
    onClockEnabledSelected: (Boolean) -> Unit,
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
        Spacer(modifier = Modifier.height(20.dp))
        Text(
            text = stringResource(R.string.coordinatesLabel),
            style = MaterialTheme.typography.titleMedium
        )
        Spacer(modifier = Modifier.height(12.dp))
        val coordinateOptions = listOf(false, true)
        SingleChoiceSegmentedButtonRow {
            coordinateOptions.forEachIndexed { index, show ->
                SegmentedButton(
                    selected = show == showCoordinates,
                    onClick = { onShowCoordinatesSelected(show) },
                    shape = SegmentedButtonDefaults.itemShape(index = index, count = coordinateOptions.size)
                ) {
                    Text(stringResource(if (show) R.string.coordinatesOn else R.string.coordinatesOff))
                }
            }
        }
        Spacer(modifier = Modifier.height(20.dp))
        Text(
            text = stringResource(R.string.clockLabel),
            style = MaterialTheme.typography.titleMedium
        )
        Spacer(modifier = Modifier.height(12.dp))
        val clockOptions = listOf(false, true)
        SingleChoiceSegmentedButtonRow {
            clockOptions.forEachIndexed { index, enabled ->
                SegmentedButton(
                    selected = enabled == clockEnabled,
                    onClick = { onClockEnabledSelected(enabled) },
                    shape = SegmentedButtonDefaults.itemShape(index = index, count = clockOptions.size)
                ) {
                    Text(stringResource(if (enabled) R.string.clockOn else R.string.clockOff))
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
    listener: EdgeTapPaddingModeListener,
    coordinatesListener: ShowCoordinatesListener,
    clockListener: ClockEnabledListener,
) {
    val composeView = ComposeView(activity).apply {
        setViewCompositionStrategy(ViewCompositionStrategy.DisposeOnDetachedFromWindow)
        setContent {
            GoDroidTheme {
                Surface(color = MaterialTheme.colorScheme.surface) {
                    val scope = rememberCoroutineScope()
                    val currentMode by settingsDataStore.edgeTapPaddingMode.collectAsState(
                        initial = EdgeTapPaddingMode.AUTO
                    )
                    val showCoordinates by settingsDataStore.showCoordinates.collectAsState(
                        initial = true
                    )
                    val clockEnabled by settingsDataStore.clockEnabled.collectAsState(
                        initial = true
                    )
                    AppPreferencesScreen(
                        currentMode = currentMode,
                        onModeSelected = { mode ->
                            scope.launch { settingsDataStore.setEdgeTapPaddingMode(mode) }
                            listener.onEdgeTapPaddingModeChanged(mode)
                        },
                        showCoordinates = showCoordinates,
                        onShowCoordinatesSelected = { show ->
                            scope.launch { settingsDataStore.setShowCoordinates(show) }
                            coordinatesListener.onShowCoordinatesChanged(show)
                        },
                        clockEnabled = clockEnabled,
                        onClockEnabledSelected = { enabled ->
                            scope.launch { settingsDataStore.setClockEnabled(enabled) }
                            clockListener.onClockEnabledChanged(enabled)
                        },
                    )
                }
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
