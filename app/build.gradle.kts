plugins {
    alias(libs.plugins.android.application)
}

android {
    namespace = "de.agrothe.go"
    compileSdk = 36

    defaultConfig {
        minSdk = 21
        targetSdk = 36
        versionCode = 1
        versionName = "1.0"

        testInstrumentationRunner = "androidx.test.runner.AndroidJUnitRunner"

        // Set ABI filters (choose what you really want)
        ndk {
            abiFilters += listOf("armeabi-v7a", "arm64-v8a", "x86", "x86_64")
        }

        externalNativeBuild {
            ndkBuild {
                // Optional: You can pass compiler flags here
                // cppFlags += "-DDEBUG"
            }
        }
    }

    buildTypes {
        getByName("release") {
            isMinifyEnabled = false
            proguardFiles(
                getDefaultProguardFile("proguard-android-optimize.txt"),
                "proguard-rules.pro"
            )
        }
    }

    // ✅ Use ndkBuild and point to Android.mk
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

// Clean up gnugo sources before copy (optional, but safe)
tasks.named("clean") {
    doFirst {
        delete("$projectDir/src/main/cpp/gnugo-3.8")
    }
}

// Copy base gnugo + patches
tasks.register<Copy>("copyGnugoSources") {
    from("$rootDir/third_party/gnugo-3.8")
    into("$projectDir/src/main/cpp/gnugo-3.8")
}

tasks.register<Copy>("copyGnugoPatches") {
    from("$rootDir/patches/gnugo-3.8")
    into("$projectDir/src/main/cpp/gnugo-3.8")
    duplicatesStrategy = DuplicatesStrategy.INCLUDE
}

tasks.named("preBuild") {
    dependsOn("copyGnugoPatches")
}
tasks.named("copyGnugoPatches") {
    dependsOn("copyGnugoSources")
}

dependencies {
    implementation(libs.appcompat)
    implementation(libs.material)
    testImplementation(libs.junit)
    androidTestImplementation(libs.ext.junit)
    androidTestImplementation(libs.espresso.core)
    implementation("androidx.appcompat:appcompat:1.7.1")
}
