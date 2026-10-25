import java.util.Properties
import java.io.FileInputStream

plugins {
    alias(libs.plugins.android.application)
    alias(libs.plugins.kotlin.android)
    alias(libs.plugins.kotlin.compose)
}
apply(from = "$rootDir/app/prepareGnugo.gradle.kts")
apply(from = "$rootDir/app/buildGnugoExecutable.gradle.kts")
android {
    namespace = "com.samthegliderpilot.godroid"
    compileSdk = 36
    // Pinned so every builder (CI, F-Droid, local) compiles GnuGo with the same NDK.
    ndkVersion = "27.0.12077973"

    // Do not embed the encrypted "Dependency metadata" block in the APK or AAB. It is
    // meant for Google and F-Droid rejects upstream APKs that carry it.
    dependenciesInfo {
        includeInApk = false
        includeInBundle = false
    }

    defaultConfig {
        minSdk = 24
        targetSdk = 36
        versionCode = 20
        versionName = "1.5.2"

        testInstrumentationRunner = "androidx.test.runner.AndroidJUnitRunner"

        ndk {
            // Application.mk only builds armeabi-v7a/arm64-v8a; claiming x86/x86_64 here
            // without building them would ship an APK missing the native lib on those ABIs.
            abiFilters += listOf("armeabi-v7a", "arm64-v8a")
        }
    }

    // libgnugo.so is a real executable run via ProcessBuilder, not dlopen'd, so it
    // must exist as an actual file on disk - the default (API 23+) of mapping native
    // libraries directly out of the compressed APK, with no on-disk copy, won't do.
    packaging {
        jniLibs {
            useLegacyPackaging = true
        }
    }
    // Release signing is optional. The release workflow writes keystore.properties,
    // but debug builds and third-party builders (F-Droid signs with its own key)
    // don't have one and must still be able to build.
    val keystorePropertiesFile = rootProject.file("keystore/keystore.properties")
    val hasReleaseKeystore = keystorePropertiesFile.exists()
    if (hasReleaseKeystore) {
        val keystoreProperties = Properties().apply {
            FileInputStream(keystorePropertiesFile).use { load(it) }
        }
        signingConfigs {
            create("release") {
                storeFile = file(keystoreProperties["storeFile"] as String)
                storePassword = keystoreProperties["storePassword"] as String
                keyAlias = keystoreProperties["keyAlias"] as String
                keyPassword = keystoreProperties["keyPassword"] as String
            }
        }
    }
    buildTypes {
        getByName("release") {
            isMinifyEnabled = true
            if (hasReleaseKeystore) {
                signingConfig = signingConfigs.getByName("release")
            }
            proguardFiles(
                getDefaultProguardFile("proguard-android-optimize.txt"),
                "proguard-rules.pro"
            )
        }
    }

    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_11
        targetCompatibility = JavaVersion.VERSION_11
    }

    kotlinOptions {
        jvmTarget = "11"
    }

    buildFeatures {
        compose = true
    }
}

dependencies {
    implementation(libs.appcompat)
    implementation(libs.material)
    implementation(libs.core)
    implementation(libs.activity)
    implementation(libs.kotlinx.coroutines.android)
    implementation(libs.lifecycle.viewmodel.ktx)

    implementation(platform(libs.compose.bom))
    implementation(libs.compose.ui)
    implementation(libs.compose.material3)
    implementation(libs.compose.foundation)
    implementation(libs.activity.compose)
    debugImplementation(libs.compose.ui.tooling)
    implementation(libs.compose.ui.tooling.preview)

    implementation(libs.datastore.preferences)

    testImplementation(libs.junit)
    androidTestImplementation(libs.ext.junit)
    androidTestImplementation(libs.espresso.core)
}
