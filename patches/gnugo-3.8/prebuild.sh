#!/bin/bash

# Exit on error
set -e

# Set paths
ROOT_DIR="$(cd "$(dirname "$0")/../.." && pwd)"
GNUGO_SRC="$ROOT_DIR/third_party/gnugo-3.8"
TEMP_BUILD="$ROOT_DIR/build/tmp/gnugo-prebuild"
ANDROID_CPP_DIR="$ROOT_DIR/app/src/main/cpp/gnugo-3.8"
GENERATED_LIST="$ROOT_DIR/patches/gnugo-3.8/gnugo_generated_files.txt"

echo "=== GNU Go Pre-Build Script ==="
echo "Root: $ROOT_DIR"
echo "Copying from: $GNUGO_SRC"
echo "Temp build: $TEMP_BUILD"
echo "Final Android source: $ANDROID_CPP_DIR"
echo ""

# Clean temp build folder
echo "[1/5] Cleaning temp build folder..."
rm -rf "$TEMP_BUILD"
mkdir -p "$TEMP_BUILD"

# Copy clean gnugo source into temp
echo "[2/5] Copying gnugo source into temp folder..."
cp -r "$GNUGO_SRC/"* "$TEMP_BUILD/"

# Run make to generate required files
echo "[3/5] Running 'make' in temp folder..."
cd "$TEMP_BUILD"
make

# Clean destination (Android app's native folder)
echo "[4/5] Cleaning Android native folder..."
rm -rf "$ANDROID_CPP_DIR"
mkdir -p "$ANDROID_CPP_DIR"

# Copy only generated files
echo "[5/5] Copying generated files..."
if [[ -f "$GENERATED_LIST" ]]; then
  while IFS= read -r file; do
    src="$TEMP_BUILD/$file"
    dest="$ANDROID_CPP_DIR/$(basename "$file")"

    if [[ -f "$src" ]]; then
      echo "  → $file"
      cp "$src" "$dest"
    else
      echo "  ⚠️  Warning: Generated file not found: $src"
    fi
  done < "$GENERATED_LIST"
else
  echo "❌ Error: No file list found at $GENERATED_LIST"
  exit 1
fi

echo ""
echo "✅ Done. You can now build your app as normal."
