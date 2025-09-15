plugins {
    alias(libs.plugins.android.application)
}

android {
    namespace = "de.agrothe.go"
    compileSdk = 36

    defaultConfig {
        applicationId = "de.agrothe.go"
        minSdk = 24
        targetSdk = 36
        versionCode = 1
        versionName = "1.0"

        testInstrumentationRunner = "androidx.test.runner.AndroidJUnitRunner"
    }

    buildTypes {
        release {
            isMinifyEnabled = false
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
}

tasks.register<Copy>("copyGnugoSources") {
    // Copy base gnugo source first
    from("$rootDir/third_party/gnugo-3.8")
    into("$projectDir/src/main/cpp/gnugo-3.8")
}

tasks.register<Copy>("copyGnugoPatches") {
    // Copy patch files on top, overriding anything if needed
    from("$rootDir/patches/gnugo-3.8")
    into("$projectDir/src/main/cpp/gnugo-3.8")
}

// Combine into a single task that depends on both
tasks.register("prepareGnugoSources") {
    dependsOn("copyGnugoSources", "copyGnugoPatches")
}

// Hook the combined task to run before preBuild
tasks.named("preBuild") {
    dependsOn("prepareGnugoSources")
}

dependencies {

    implementation(libs.appcompat)
    implementation(libs.material)
    testImplementation(libs.junit)
    androidTestImplementation(libs.ext.junit)
    androidTestImplementation(libs.espresso.core)
}