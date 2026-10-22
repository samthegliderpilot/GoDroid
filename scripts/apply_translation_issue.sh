#!/usr/bin/env bash
# Turn a filled-out "Translation" issue form into strings.xml changes.
#
# Reads the issue body (GitHub Issue Forms render each field as a `### Label`
# markdown heading followed by the value) from stdin, pulls out the locale
# and the `key = value` translation lines, validates the keys against the
# default strings.xml, and writes the changes into
# app/src/main/res/values-<locale>/strings.xml - creating the file if that
# locale doesn't exist yet.
#
# This only ever adds or replaces individual <string> lines; it never
# rewrites a whole file, so the diff a reviewer sees is just the strings
# that changed.
#
# Used by .github/workflows/translation-to-pr.yml, which feeds it an issue
# body and then opens a PR from whatever this script changed. A maintainer
# reviews that PR like any other before merging - this script does not
# publish anything on its own.
set -euo pipefail

res_dir="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)/app/src/main/res"
default_file="$res_dir/values/strings.xml"
issue_body="$(cat)"

fail() {
    echo "::error::$1"
    exit 1
}

# Everything between a "### $1" heading and the next "### " heading (or EOF).
extract_field() {
    awk -v label="### $1" '
        $0 == label { capture=1; next }
        capture && /^### / { capture=0 }
        capture { print }
    ' <<< "$issue_body"
}

default_keys() {
    grep -oE 'name="[^"]+"' "$default_file" | sed -e 's/^name="//' -e 's/"$//'
}

xml_escape() {
    # An unescaped `&` in a `${var//pattern/replacement}` replacement means
    # "the matched text" (same convention as sed), so the literal `&` we
    # want in the output has to be written as `\&` in each replacement below.
    local s="$1"
    s="${s//&/\&amp;}"
    s="${s//</\&lt;}"
    s="${s//>/\&gt;}"
    printf '%s' "$s"
}

# --- Language field: first non-blank line, trimmed ---
locale="$(extract_field "Language" | grep -m1 -v '^[[:space:]]*$' | sed -e 's/^[[:space:]]*//' -e 's/[[:space:]]*$//')"
if ! [[ "$locale" =~ ^[a-z]{2,3}(-r[A-Z]{2})?$ ]]; then
    fail "'$locale' doesn't look like a locale code (expected e.g. 'fr', 'zh-rCN')"
fi

# --- Translations field: key = value / key: value, one per line ---
translations_text="$(extract_field "Translations")"
if [ -z "$(echo "$translations_text" | tr -d '[:space:]')" ]; then
    fail "No 'Translations' field found in the issue body"
fi

known_keys="$(default_keys)"

locale_dir="$res_dir/values-$locale"
strings_file="$locale_dir/strings.xml"
mkdir -p "$locale_dir"
if [ ! -f "$strings_file" ]; then
    printf '<?xml version="1.0" encoding="utf-8"?>\n<resources>\n</resources>\n' > "$strings_file"
fi

applied=()
skipped=()

while IFS= read -r line; do
    line="$(echo "$line" | sed -e 's/^[[:space:]]*//' -e 's/[[:space:]]*$//')"
    [ -z "$line" ] && continue
    [[ "$line" == \#* ]] && continue

    if [[ "$line" =~ ^([A-Za-z][A-Za-z0-9_]*)[[:space:]]*[:=][[:space:]]*(.+)$ ]]; then
        key="${BASH_REMATCH[1]}"
        value="${BASH_REMATCH[2]}"
    else
        skipped+=("couldn't parse as 'key = value': $line")
        continue
    fi

    if ! grep -qx "$key" <<< "$known_keys"; then
        skipped+=("'$key' is not a known string key")
        continue
    fi

    escaped_value="$(xml_escape "$value")"
    # Submitted values may contain a literal backslash-n (Android's own
    # newline escape for a plain, non-CDATA string - see translate.html).
    # Passed as NEW_LINE here and read back via ENVIRON[], not -v: awk's -v
    # assignment reprocesses backslash escapes in its value (a well-known
    # awk gotcha), which would silently turn that literal \n into a real
    # embedded newline - invalid for a plain string tag and liable to be
    # collapsed by Android's resource compiler.
    export NEW_LINE="$(printf '\t<string name="%s">%s</string>' "$key" "$escaped_value")"

    awk -v pattern="<string name=\"$key\">" '
        BEGIN { newline = ENVIRON["NEW_LINE"]; done = 0 }
        index($0, pattern) > 0 { print newline; done = 1; next }
        /<\/resources>/ && !done { print newline; done = 1; print; next }
        { print }
    ' "$strings_file" > "$strings_file.tmp"
    mv "$strings_file.tmp" "$strings_file"
    unset NEW_LINE

    applied+=("$key")
done <<< "$translations_text"

if [ "${#applied[@]}" -eq 0 ]; then
    fail "No valid 'key = value' translation lines found"
fi

echo "Updated ${#applied[@]} string(s) for locale '$locale': ${applied[*]}"

if [ "${#skipped[@]}" -gt 0 ]; then
    echo
    echo "Skipped line(s) that couldn't be applied:"
    for problem in "${skipped[@]}"; do
        echo "  - $problem"
    done
    echo
    echo "::warning::Some translation lines were skipped - check the generated PR description."
fi
