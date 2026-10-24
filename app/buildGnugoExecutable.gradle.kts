import java.io.FileInputStream
import java.util.Properties

// Builds GnuGo as a standalone executable (see patches/gnugo-3.8/Android.mk) and
// packages it the same way Android packages native libraries: named like a .so,
// placed under src/main/jniLibs/<abi>/, so the installer extracts it into the
// app's native-library directory with execute permission. That directory is
// exempt from the API 29+ W^X restriction that blocks exec() on files in the
// app's writable data directory - the same trick Termux-style apps use to ship
// a real binary. It is still run as a subprocess (ProcessBuilder), never dlopen'd.
//
// This runs ndk-build directly rather than through AGP's externalNativeBuild
// integration: NDK's build-executable.mk refuses a LOCAL_MODULE_FILENAME with a
// file extension, so the raw ndk-build output can never be named "libgnugo.so"
// on its own - the rename has to happen in a packaging step either way, and
// driving ndk-build directly keeps that step's output location predictable
// (AGP's own external-native-build intermediates directory is an internal
// implementation detail that has not proven stable across clean/branch switches
// during development).

val gnugoCppDir = "$projectDir/src/main/cpp"
val gnugoNativeOutDir = layout.buildDirectory.dir("gnugoNative").get().asFile.path
val jniLibsDir = "$projectDir/src/main/jniLibs"
val gnugoAbis = listOf("armeabi-v7a", "arm64-v8a")

// Kept in sync with android.ndkVersion in build.gradle.kts by hand - both pin the
// same NDK for the same reason (reproducible builds across CI/F-Droid/local).
val gnugoNdkVersion = "27.0.12077973"

val gnugoLocalProperties = Properties().apply {
    val f = rootProject.file("local.properties")
    if (f.exists()) FileInputStream(f).use { load(it) }
}
val gnugoSdkDir = gnugoLocalProperties.getProperty("sdk.dir") ?: System.getenv("ANDROID_HOME")

val gnugoNdkBuildExecutable = run {
    requireNotNull(gnugoSdkDir) {
        "Android SDK location not found (set sdk.dir in local.properties or ANDROID_HOME)"
    }
    val suffix = if (org.gradle.internal.os.OperatingSystem.current().isWindows) ".cmd" else ""
    "$gnugoSdkDir/ndk/$gnugoNdkVersion/ndk-build$suffix"
}

tasks.register<Exec>("buildGnugoExecutable") {
    dependsOn("copyGnugoPatches")
    workingDir = file(gnugoCppDir)
    outputs.dir(gnugoNativeOutDir)
    commandLine(
        gnugoNdkBuildExecutable,
        "NDK_PROJECT_PATH=.",
        "APP_BUILD_SCRIPT=./Android.mk",
        "NDK_APPLICATION_MK=./Application.mk",
        "NDK_OUT=$gnugoNativeOutDir/obj",
        "NDK_LIBS_OUT=$gnugoNativeOutDir/libs"
    )
}

val packageGnugoExecutable = tasks.register("packageGnugoExecutable") {
    dependsOn("buildGnugoExecutable")
}

for (abi in gnugoAbis) {
    val abiTask = tasks.register<Copy>("packageGnugoExecutable_$abi") {
        dependsOn("buildGnugoExecutable")
        from("$gnugoNativeOutDir/libs/$abi/libgnugo") {
            rename { "libgnugo.so" }
        }
        into("$jniLibsDir/$abi")
    }
    packageGnugoExecutable.configure { dependsOn(abiTask) }
}

tasks.named("preBuild") {
    dependsOn(packageGnugoExecutable)
}

tasks.register<Delete>("cleanGnugoNative") {
    delete(gnugoNativeOutDir)
    for (abi in gnugoAbis) {
        delete("$jniLibsDir/$abi/libgnugo.so")
    }
}
tasks.named("clean") {
    dependsOn("cleanGnugoNative")
}
