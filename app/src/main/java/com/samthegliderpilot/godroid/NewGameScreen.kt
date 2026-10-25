package com.samthegliderpilot.godroid

import android.app.Dialog
import android.view.Window
import androidx.appcompat.app.AppCompatActivity
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.verticalScroll
import androidx.compose.material3.Button
import androidx.compose.material3.DropdownMenu
import androidx.compose.material3.DropdownMenuItem
import androidx.compose.material3.ExposedDropdownMenuBox
import androidx.compose.material3.ExposedDropdownMenuDefaults
import androidx.compose.material3.ExperimentalMaterial3Api
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.OutlinedTextField
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.platform.ComposeView
import androidx.compose.ui.platform.ViewCompositionStrategy
import androidx.compose.ui.res.stringResource
import androidx.compose.ui.unit.dp

/** Mirrors `GameInfo`'s 9 new-game-setup fields - built from the current `GameInfo` by
 * `MainActivity` (not from persisted defaults: editing an in-progress game's settings
 * must compare against *that game's* current values, not the last-saved preference). */
data class NewGameSettings(
    val boardSize: Int,
    val handicap: Int,
    val playerBlackHuman: Boolean,
    val playerWhiteHuman: Boolean,
    val level: Int,
    val komi: String,
    val chineseRules: Boolean,
    val aiDelaySeconds: Int,
    val allowResignation: Boolean
)

/** Java-callable: both Apply and Start funnel into the same existing
 * `MainActivity.newGame(GameInfo, boolean)` orchestration, just with a different flag -
 * so one method (`startFresh` distinguishes them) is enough, and it SAM-converts from a
 * Java lambda. */
interface NewGameSettingsListener {
    fun onConfirm(settings: NewGameSettings, startFresh: Boolean)
}

private enum class HumanPlays(val blackHuman: Boolean, val whiteHuman: Boolean) {
    BLACK(true, false),
    WHITE(false, true),
    BOTH(true, true),
    NONE(false, false)
}

private fun humanPlaysOf(blackHuman: Boolean, whiteHuman: Boolean): HumanPlays =
    HumanPlays.values().first { it.blackHuman == blackHuman && it.whiteHuman == whiteHuman }

private fun humanPlaysLabel(mode: HumanPlays): Int = when (mode) {
    HumanPlays.BLACK -> R.string.newGameDialogHumanPlaysBlackListWievItem
    HumanPlays.WHITE -> R.string.newGameDialogHumanPlaysWhiteListWievItem
    HumanPlays.BOTH -> R.string.newGameDialogHumanPlaysBothListWievItem
    HumanPlays.NONE -> R.string.newGameDialogHumanPlaysNoneListWievItem
}

private val BOARD_SIZES = listOf(
    9 to R.string.newGameDialogBoardSizeListWievItemSize9,
    13 to R.string.newGameDialogBoardSizeListWievItemSize13,
    19 to R.string.newGameDialogBoardSizeListWievItemSize19,
)

private val HANDICAPS = listOf(
    0 to R.string.newGameDialogHandicapListWievItem0,
    2 to R.string.newGameDialogHandicapListWievItem2,
    3 to R.string.newGameDialogHandicapListWievItem3,
    4 to R.string.newGameDialogHandicapListWievItem4,
    5 to R.string.newGameDialogHandicapListWievItem5,
    6 to R.string.newGameDialogHandicapListWievItem6,
    7 to R.string.newGameDialogHandicapListWievItem7,
    8 to R.string.newGameDialogHandicapListWievItem8,
    9 to R.string.newGameDialogHandicapListWievItem9,
)

private val STRENGTHS = listOf(
    1 to R.string.newGameDialogStrengthListWievItem1,
    2 to R.string.newGameDialogStrengthListWievItem2,
    3 to R.string.newGameDialogStrengthListWievItem3,
    4 to R.string.newGameDialogStrengthListWievItem4,
    5 to R.string.newGameDialogStrengthListWievItem5,
    6 to R.string.newGameDialogStrengthListWievItem6,
    7 to R.string.newGameDialogStrengthListWievItem7,
    8 to R.string.newGameDialogStrengthListWievItem8,
    9 to R.string.newGameDialogStrengthListWievItem9,
    10 to R.string.newGameDialogStrengthListWievItem10,
)

private val KOMIS = listOf(
    "0" to R.string.newGameDialogKomiListWievItem1,
    "0.5" to R.string.newGameDialogKomiListWievItem2,
    "4.5" to R.string.newGameDialogKomiListWievItem3,
    "5.5" to R.string.newGameDialogKomiListWievItem4,
    "6.5" to R.string.newGameDialogKomiListWievItem5,
    "7.5" to R.string.newGameDialogKomiListWievItem6,
    "8.5" to R.string.newGameDialogKomiListWievItem7,
)

private val SCORINGS = listOf(
    false to R.string.newGameDialogScoringJapaneseListWievItem,
    true to R.string.newGameDialogScoringChineseListWievItem,
)

private val AI_DELAYS = listOf(
    0 to R.string.number0, 1 to R.string.number1, 2 to R.string.number2,
    3 to R.string.number3, 4 to R.string.number4, 5 to R.string.number5,
    6 to R.string.number6, 7 to R.string.number7, 8 to R.string.number8,
    9 to R.string.number9, 10 to R.string.number10,
)

private val ALLOW_RESIGNATIONS = listOf(
    true to R.string.yes,
    false to R.string.no,
)

/** Enabled only when a "must-change" setting (player assignment/strength/komi/AI
 * delay/allow-resignation) changed, and no "must-restart" setting (board size/handicap/
 * scoring) changed - exactly the rule the old `SpinnerEnum._mustChange` flags encoded. */
private fun isApplyEnabled(original: NewGameSettings, current: NewGameSettings): Boolean {
    val mustRestartChanged = original.boardSize != current.boardSize ||
        original.handicap != current.handicap ||
        original.chineseRules != current.chineseRules
    if (mustRestartChanged) {
        return false
    }
    return original.playerBlackHuman != current.playerBlackHuman ||
        original.playerWhiteHuman != current.playerWhiteHuman ||
        original.level != current.level ||
        original.komi != current.komi ||
        original.aiDelaySeconds != current.aiDelaySeconds ||
        original.allowResignation != current.allowResignation
}

@OptIn(ExperimentalMaterial3Api::class)
@Composable
private fun <T> SettingDropdown(
    label: String,
    options: List<Pair<T, Int>>,
    selected: T,
    onSelected: (T) -> Unit
) {
    var expanded by remember { mutableStateOf(false) }
    Column(modifier = Modifier.padding(vertical = 6.dp)) {
        Text(text = label, style = MaterialTheme.typography.labelLarge)
        ExposedDropdownMenuBox(expanded = expanded, onExpandedChange = { expanded = it }) {
            OutlinedTextField(
                value = stringResource(options.first { it.first == selected }.second),
                onValueChange = {},
                readOnly = true,
                trailingIcon = { ExposedDropdownMenuDefaults.TrailingIcon(expanded = expanded) },
                modifier = Modifier.menuAnchor(
                    androidx.compose.material3.MenuAnchorType.PrimaryNotEditable
                ).fillMaxWidth()
            )
            DropdownMenu(
                expanded = expanded,
                onDismissRequest = { expanded = false }
            ) {
                options.forEach { (value, labelRes) ->
                    DropdownMenuItem(
                        text = { Text(stringResource(labelRes)) },
                        onClick = {
                            onSelected(value)
                            expanded = false
                        }
                    )
                }
            }
        }
    }
}

@Composable
fun NewGameScreen(
    original: NewGameSettings,
    onApply: (NewGameSettings) -> Unit,
    onStart: (NewGameSettings) -> Unit
) {
    var current by remember { mutableStateOf(original) }

    Column(
        modifier = Modifier
            .padding(16.dp)
            .verticalScroll(rememberScrollState())
    ) {
        SettingDropdown(
            label = stringResource(R.string.newGameDialogBoardSizeLabel),
            options = BOARD_SIZES,
            selected = current.boardSize,
            onSelected = { current = current.copy(boardSize = it) }
        )
        SettingDropdown(
            label = stringResource(R.string.newGameDialogHandicapLabel),
            options = HANDICAPS,
            selected = current.handicap,
            onSelected = { current = current.copy(handicap = it) }
        )
        SettingDropdown(
            label = stringResource(R.string.newGameDialogHumanPlaysLabelText),
            options = HumanPlays.values().map { it to humanPlaysLabel(it) },
            selected = humanPlaysOf(current.playerBlackHuman, current.playerWhiteHuman),
            onSelected = {
                current = current.copy(
                    playerBlackHuman = it.blackHuman,
                    playerWhiteHuman = it.whiteHuman
                )
            }
        )
        SettingDropdown(
            label = stringResource(R.string.newGameDialogStrengthLabel),
            options = STRENGTHS,
            selected = current.level,
            onSelected = { current = current.copy(level = it) }
        )
        SettingDropdown(
            label = stringResource(R.string.newGameDialogKomiLabel),
            options = KOMIS,
            selected = current.komi,
            onSelected = { current = current.copy(komi = it) }
        )
        SettingDropdown(
            label = stringResource(R.string.newGameDialogScoringLabel),
            options = SCORINGS,
            selected = current.chineseRules,
            onSelected = { current = current.copy(chineseRules = it) }
        )
        SettingDropdown(
            label = stringResource(R.string.newGameDialogAIDelayLabel),
            options = AI_DELAYS,
            selected = current.aiDelaySeconds,
            onSelected = { current = current.copy(aiDelaySeconds = it) }
        )
        SettingDropdown(
            label = stringResource(R.string.newGameAllowResignationLabel),
            options = ALLOW_RESIGNATIONS,
            selected = current.allowResignation,
            onSelected = { current = current.copy(allowResignation = it) }
        )

        Row(
            modifier = Modifier
                .fillMaxWidth()
                .padding(top = 16.dp),
            horizontalArrangement = Arrangement.Center
        ) {
            Button(
                onClick = { onApply(current) },
                enabled = isApplyEnabled(original, current)
            ) {
                Text(stringResource(R.string.newGameDialogApplytButtonText))
            }
            Button(
                onClick = { onStart(current) },
                modifier = Modifier.padding(start = 16.dp)
            ) {
                Text(stringResource(R.string.newGameDialogStartButtonText))
            }
        }
    }
}

/**
 * Replaces the old `new_game.xml` + `SpinnerEnum`-driven `Dialog`: same plain,
 * no-title, scrollable `Dialog` (not an `AlertDialog`), same batched Apply-vs-Start
 * semantics, just Compose-hosted controls instead of 8 Spinners.
 */
fun showNewGameDialog(
    activity: AppCompatActivity,
    original: NewGameSettings,
    listener: NewGameSettingsListener
) {
    val dialog = Dialog(activity)
    dialog.window?.requestFeature(Window.FEATURE_NO_TITLE)
    dialog.attachComposeOwners(activity)
    val composeView = ComposeView(activity).apply {
        setViewCompositionStrategy(ViewCompositionStrategy.DisposeOnDetachedFromWindow)
        setContent {
            GoDroidTheme {
                NewGameScreen(
                    original = original,
                    onApply = { settings ->
                        listener.onConfirm(settings, false)
                        dialog.dismiss()
                    },
                    onStart = { settings ->
                        listener.onConfirm(settings, true)
                        dialog.dismiss()
                    }
                )
            }
        }
    }
    dialog.setContentView(composeView)
    dialog.show()
}
