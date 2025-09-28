import java.util.Properties
import java.io.FileInputStream

plugins {
    alias(libs.plugins.android.application)
}
apply(from = "$rootDir/prepareGnugo.gradle.kts")
android {
    namespace = "com.samthegliderpilot.godroid"
    compileSdk = 36

    defaultConfig {
        minSdk = 21
        targetSdk = 36
        versionCode = 13
        versionName = "1.4.0-RC4"

        testInstrumentationRunner = "androidx.test.runner.AndroidJUnitRunner"

        ndk {
            abiFilters += listOf("armeabi-v7a", "arm64-v8a", "x86", "x86_64")
        }

        externalNativeBuild {
            ndkBuild {
            }
        }
    }
    val keystorePropertiesFile = rootProject.file("keystore/keystore.properties")
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
    buildTypes {
        getByName("release") {
            isMinifyEnabled = false
            signingConfig = signingConfigs.getByName("release")
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
