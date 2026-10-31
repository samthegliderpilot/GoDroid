package com.samthegliderpilot.godroid

import android.content.Context
import androidx.datastore.core.DataStore
import androidx.datastore.migrations.SharedPreferencesMigration
import androidx.datastore.preferences.core.Preferences
import androidx.datastore.preferences.core.booleanPreferencesKey
import androidx.datastore.preferences.core.edit
import androidx.datastore.preferences.core.intPreferencesKey
import androidx.datastore.preferences.core.stringPreferencesKey
import androidx.datastore.preferences.preferencesDataStore
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.first
import kotlinx.coroutines.flow.map
import kotlinx.coroutines.runBlocking

private val BOARD_SIZE_KEY = intPreferencesKey("boardSize")
private val HANDICAP_KEY = intPreferencesKey("handicap")
private val KOMI_KEY = stringPreferencesKey("komi")
private val CHINESE_RULES_KEY = booleanPreferencesKey("chineseRules")
private val LEVEL_KEY = intPreferencesKey("level")
private val PLAYER_BLACK_HUMAN_KEY = booleanPreferencesKey("playerBlackHuman")
private val PLAYER_WHITE_HUMAN_KEY = booleanPreferencesKey("playerWhiteHuman")
private val AI_DELAY_KEY = intPreferencesKey("aiDelay")
private val ALLOW_RESIGNATION_KEY = booleanPreferencesKey("allowResignation")
private val EDGE_TAP_PADDING_KEY = stringPreferencesKey("edgeTapPaddingMode")
private val SHOW_COORDINATES_KEY = booleanPreferencesKey("showCoordinates")

// Keys migrated one-time from the legacy "app_prefs" SharedPreferences file - exactly the
// 9 New Game dialog settings plus edge-tap padding. "lastSaveLoadUri" and
// "oldSavesMigrationDismissed" stay on SharedPreferences untouched; they back unrelated
// flows and were never part of either settings dialog.
private val MIGRATED_KEYS = setOf(
    "boardSize", "handicap", "komi", "chineseRules", "level",
    "playerBlackHuman", "playerWhiteHuman", "aiDelay", "allowResignation",
    "edgeTapPaddingMode"
)

private val Context.settingsDataStore: DataStore<Preferences> by preferencesDataStore(
    name = "app_settings",
    produceMigrations = { context ->
        listOf(
            SharedPreferencesMigration(
                context = context,
                sharedPreferencesName = "app_prefs",
                keysToMigrate = MIGRATED_KEYS,
                migrate = { sharedPrefs, currentPreferences ->
                    currentPreferences.toMutablePreferences().apply {
                        if (sharedPrefs.contains("boardSize")) {
                            this[BOARD_SIZE_KEY] =
                                sharedPrefs.getInt("boardSize", GameInfo._DEFAULT_BOARD_SIZE)
                        }
                        if (sharedPrefs.contains("handicap")) {
                            this[HANDICAP_KEY] =
                                sharedPrefs.getInt("handicap", GameInfo._DEFAULT_HANDICAP)
                        }
                        if (sharedPrefs.contains("komi")) {
                            this[KOMI_KEY] =
                                sharedPrefs.getString("komi", GameInfo._DEFAULT_KOMI)
                                    ?: GameInfo._DEFAULT_KOMI
                        }
                        if (sharedPrefs.contains("chineseRules")) {
                            this[CHINESE_RULES_KEY] = sharedPrefs.getBoolean(
                                "chineseRules", GameInfo._DEFAULT_CHINESE_RULES
                            )
                        }
                        if (sharedPrefs.contains("level")) {
                            this[LEVEL_KEY] =
                                sharedPrefs.getInt("level", GameInfo._DEFAULT_LEVEL)
                        }
                        if (sharedPrefs.contains("playerBlackHuman")) {
                            this[PLAYER_BLACK_HUMAN_KEY] = sharedPrefs.getBoolean(
                                "playerBlackHuman", GameInfo._DEFAULT_BLACK_HUMAN
                            )
                        }
                        if (sharedPrefs.contains("playerWhiteHuman")) {
                            this[PLAYER_WHITE_HUMAN_KEY] = sharedPrefs.getBoolean(
                                "playerWhiteHuman", GameInfo._DEFAULT_WHITE_HUMAN
                            )
                        }
                        if (sharedPrefs.contains("aiDelay")) {
                            this[AI_DELAY_KEY] =
                                sharedPrefs.getInt("aiDelay", GameInfo._DEFAULT_AI_DELAY)
                        }
                        if (sharedPrefs.contains("allowResignation")) {
                            this[ALLOW_RESIGNATION_KEY] = sharedPrefs.getBoolean(
                                "allowResignation", GameInfo._DEFAULT_ALLOW_RESIGNATION
                            )
                        }
                        if (sharedPrefs.contains("edgeTapPaddingMode")) {
                            this[EDGE_TAP_PADDING_KEY] = sharedPrefs.getString(
                                "edgeTapPaddingMode", EdgeTapPaddingMode.AUTO.name
                            ) ?: EdgeTapPaddingMode.AUTO.name
                        }
                    }
                }
            )
        )
    }
)

/**
 * Jetpack Preferences DataStore replacement for the settings previously read/written
 * directly as `SharedPreferences` fields on `MainActivity`. A plain key-value store was
 * chosen over Proto DataStore since every setting here is already a flat primitive
 * mapping 1:1 from the old SharedPreferences keys - there's no schema to justify.
 */
class SettingsDataStore(context: Context) {

    private val dataStore = context.settingsDataStore

    val boardSize: Flow<Int> =
        dataStore.data.map { it[BOARD_SIZE_KEY] ?: GameInfo._DEFAULT_BOARD_SIZE }
    suspend fun setBoardSize(value: Int) = dataStore.edit { it[BOARD_SIZE_KEY] = value }

    val handicap: Flow<Int> =
        dataStore.data.map { it[HANDICAP_KEY] ?: GameInfo._DEFAULT_HANDICAP }
    suspend fun setHandicap(value: Int) = dataStore.edit { it[HANDICAP_KEY] = value }

    val komi: Flow<String> =
        dataStore.data.map { it[KOMI_KEY] ?: GameInfo._DEFAULT_KOMI }
    suspend fun setKomi(value: String) = dataStore.edit { it[KOMI_KEY] = value }

    val chineseRules: Flow<Boolean> =
        dataStore.data.map { it[CHINESE_RULES_KEY] ?: GameInfo._DEFAULT_CHINESE_RULES }
    suspend fun setChineseRules(value: Boolean) = dataStore.edit { it[CHINESE_RULES_KEY] = value }

    val level: Flow<Int> =
        dataStore.data.map { it[LEVEL_KEY] ?: GameInfo._DEFAULT_LEVEL }
    suspend fun setLevel(value: Int) = dataStore.edit { it[LEVEL_KEY] = value }

    val playerBlackHuman: Flow<Boolean> =
        dataStore.data.map { it[PLAYER_BLACK_HUMAN_KEY] ?: GameInfo._DEFAULT_BLACK_HUMAN }
    suspend fun setPlayerBlackHuman(value: Boolean) =
        dataStore.edit { it[PLAYER_BLACK_HUMAN_KEY] = value }

    val playerWhiteHuman: Flow<Boolean> =
        dataStore.data.map { it[PLAYER_WHITE_HUMAN_KEY] ?: GameInfo._DEFAULT_WHITE_HUMAN }
    suspend fun setPlayerWhiteHuman(value: Boolean) =
        dataStore.edit { it[PLAYER_WHITE_HUMAN_KEY] = value }

    val aiDelaySeconds: Flow<Int> =
        dataStore.data.map { it[AI_DELAY_KEY] ?: GameInfo._DEFAULT_AI_DELAY }
    suspend fun setAiDelaySeconds(value: Int) = dataStore.edit { it[AI_DELAY_KEY] = value }

    val allowResignation: Flow<Boolean> =
        dataStore.data.map { it[ALLOW_RESIGNATION_KEY] ?: GameInfo._DEFAULT_ALLOW_RESIGNATION }
    suspend fun setAllowResignation(value: Boolean) =
        dataStore.edit { it[ALLOW_RESIGNATION_KEY] = value }

    val edgeTapPaddingMode: Flow<EdgeTapPaddingMode> =
        dataStore.data.map { preferences ->
            val stored = preferences[EDGE_TAP_PADDING_KEY]
            try {
                if (stored != null) EdgeTapPaddingMode.valueOf(stored) else EdgeTapPaddingMode.AUTO
            } catch (e: IllegalArgumentException) {
                EdgeTapPaddingMode.AUTO
            }
        }
    suspend fun setEdgeTapPaddingMode(value: EdgeTapPaddingMode) =
        dataStore.edit { it[EDGE_TAP_PADDING_KEY] = value.name }

    /** One-time blocking read for `MainActivity.onCreate`'s synchronous startup flow -
     * mirrors the old `SharedPreferences` read it replaces, which was synchronous too. */
    fun getEdgeTapPaddingModeBlocking(): EdgeTapPaddingMode = runBlocking {
        edgeTapPaddingMode.first()
    }

    val showCoordinates: Flow<Boolean> =
        dataStore.data.map { it[SHOW_COORDINATES_KEY] ?: true }
    suspend fun setShowCoordinates(value: Boolean) =
        dataStore.edit { it[SHOW_COORDINATES_KEY] = value }

    /** One-time blocking read for `MainActivity.onCreate`'s synchronous startup flow -
     * same reasoning as [getEdgeTapPaddingModeBlocking]. */
    fun getShowCoordinatesBlocking(): Boolean = runBlocking {
        showCoordinates.first()
    }

    /** Java-callable blocking read/write pair for the New Game dialog's 9 settings -
     * mirrors `MainActivity`'s old `restoreGameInfo`/`storeGameInfo`, which were
     * synchronous `SharedPreferences` reads/a blocking `commit()` too. */
    fun loadNewGameSettingsBlocking(): NewGameSettings = runBlocking {
        NewGameSettings(
            boardSize = boardSize.first(),
            handicap = handicap.first(),
            playerBlackHuman = playerBlackHuman.first(),
            playerWhiteHuman = playerWhiteHuman.first(),
            level = level.first(),
            komi = komi.first(),
            chineseRules = chineseRules.first(),
            aiDelaySeconds = aiDelaySeconds.first(),
            allowResignation = allowResignation.first()
        )
    }

    fun saveNewGameSettingsBlocking(settings: NewGameSettings) = runBlocking {
        setBoardSize(settings.boardSize)
        setHandicap(settings.handicap)
        setPlayerBlackHuman(settings.playerBlackHuman)
        setPlayerWhiteHuman(settings.playerWhiteHuman)
        setLevel(settings.level)
        setKomi(settings.komi)
        setChineseRules(settings.chineseRules)
        setAiDelaySeconds(settings.aiDelaySeconds)
        setAllowResignation(settings.allowResignation)
    }
}
