import org.gradle.api.tasks.Copy
import org.gradle.api.tasks.Delete

// Configuration
val gnugoSourceDir = "$rootDir/third_party/gnugo-3.8"
val gnugoPatchDir = "$rootDir/patches/gnugo-3.8"
val gnugoTargetDir = "$projectDir/src/main/cpp/gnugo-3.8"

// Task: Clean copied gnugo sources
tasks.register<Delete>("cleanGnugo") {
    delete(gnugoTargetDir)
}

// Task: Copy base gnugo source
tasks.register<Copy>("copyGnugoSources") {
    from(gnugoSourceDir)
    into(gnugoTargetDir)
}

// Task: Apply gnugo patches (copy over files)
tasks.register<Copy>("copyGnugoPatches") {
    from(gnugoPatchDir)
    into(gnugoTargetDir)
    duplicatesStrategy = DuplicatesStrategy.INCLUDE
    dependsOn("copyGnugoSources")
}

// Hook into the clean lifecycle
tasks.named("clean") {
    dependsOn("cleanGnugo")
}

// Hook into the build lifecycle
tasks.named("preBuild") {
    dependsOn("copyGnugoPatches")
}
