import java.util.Properties
import java.io.FileInputStream

plugins {
    alias(libs.plugins.android.application)
}
apply(from = "$rootDir/app/prepareGnugo.gradle.kts")
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
        versionCode = 19
        versionName = "1.5.1"

        testInstrumentationRunner = "androidx.test.runner.AndroidJUnitRunner"

        ndk {
            abiFilters += listOf("armeabi-v7a", "arm64-v8a", "x86", "x86_64")
        }

        externalNativeBuild {
            ndkBuild {
            }
        }
    }
    // Release signing is optional. The release workflow writes keystore.properties,
    // but debug builds and third-party builders (F-Droid signs with its own key)
    // don't have one and must still be able to build.
    val keystorePropertiesFile = rootProject.file("keystore/keystore.properties")
    val hasReleaseKeystore = keystorePropertiesFile.exists()
    if (hasReleaseKeystore) {
        val keystoreProperties = Properties().apply {
            load(FileInputStream(keystorePropertiesFile))
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
            isMinifyEnabled = false
            if (hasReleaseKeystore) {
                signingConfig = signingConfigs.getByName("release")
            }
            proguardFiles(
                getDefaultProguardFile("proguard-android-optimize.txt"),
                "proguard-rules.pro"
            )
        }
    }

    // using original ndk build, I tried cmake and almost got it working...
    externalNativeBuild {
        ndkBuild {
            path = file("src/main/cpp/Android.mk")
        }
    }

    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_11
        targetCompatibility = JavaVersion.VERSION_11
    }

    buildFeatures {
        compose = true
    }
}

dependencies {
    implementation(libs.appcompat)
    implementation(libs.material)
    implementation(libs.core)
    testImplementation(libs.junit)
    androidTestImplementation(libs.ext.junit)
    androidTestImplementation(libs.espresso.core)
    implementation(libs.appcompat)
    implementation(libs.activity)
}
