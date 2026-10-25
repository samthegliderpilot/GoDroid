package com.samthegliderpilot.godroid

import android.app.Dialog
import androidx.appcompat.app.AppCompatActivity
import androidx.compose.foundation.isSystemInDarkTheme
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.darkColorScheme
import androidx.compose.material3.lightColorScheme
import androidx.compose.runtime.Composable
import androidx.compose.ui.graphics.Color
import androidx.lifecycle.setViewTreeLifecycleOwner
import androidx.lifecycle.setViewTreeViewModelStoreOwner
import androidx.savedstate.setViewTreeSavedStateRegistryOwner

// A small goban-inspired palette (warm wood tones, stone-black/white accents) for every
// Compose screen this app adds - there is no pre-existing Material color scheme to match,
// since the app's live theme (AppTheme) is bare AppCompat with only a hardcoded black
// window background.

private val GoLightColorScheme = lightColorScheme(
    primary = Color(0xFF8D6E4F),
    onPrimary = Color(0xFFFFFBF5),
    primaryContainer = Color(0xFFE4D2BA),
    onPrimaryContainer = Color(0xFF2B2219),
    secondary = Color(0xFF2B2B2B),
    onSecondary = Color(0xFFFFFFFF),
    background = Color(0xFFF5EDE0),
    onBackground = Color(0xFF2B2219),
    surface = Color(0xFFFAF6EF),
    onSurface = Color(0xFF2B2219),
)

private val GoDarkColorScheme = darkColorScheme(
    primary = Color(0xFFD8B98C),
    onPrimary = Color(0xFF2B2219),
    primaryContainer = Color(0xFF5B4530),
    onPrimaryContainer = Color(0xFFEDE6DA),
    secondary = Color(0xFFB0A89C),
    onSecondary = Color(0xFF1C1711),
    background = Color(0xFF1C1711),
    onBackground = Color(0xFFEDE6DA),
    surface = Color(0xFF241D15),
    onSurface = Color(0xFFEDE6DA),
)

@Composable
fun GoDroidTheme(content: @Composable () -> Unit) {
    MaterialTheme(
        colorScheme = if (isSystemInDarkTheme()) GoDarkColorScheme else GoLightColorScheme,
        content = content
    )
}

/**
 * A plain `Dialog`'s window - unlike an Activity's own window - doesn't automatically
 * have a `ViewTreeLifecycleOwner`/`ViewModelStoreOwner`/`SavedStateRegistryOwner`
 * reachable from it, which a `ComposeView` requires to create its recomposer
 * (`IllegalStateException: ViewTreeLifecycleOwner not found` otherwise). Propagate the
 * hosting Activity's own owners onto the dialog's decor view before setting content.
 */
fun Dialog.attachComposeOwners(activity: AppCompatActivity) {
    val decorView = window?.decorView ?: return
    decorView.setViewTreeLifecycleOwner(activity)
    decorView.setViewTreeViewModelStoreOwner(activity)
    decorView.setViewTreeSavedStateRegistryOwner(activity)
}
