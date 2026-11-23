#!/usr/bin/env bash
# Check every values-<locale>/strings.xml against the default strings.xml.
#
# Fails (non-zero exit) only on real mistakes:
#   - a key that doesn't exist in the default strings.xml (typo, or a string
#     that was renamed/removed from the default but left behind in a locale)
#   - a duplicate key within one file
#   - an unescaped apostrophe in a value (Android refuses to compile the file;
#     write \' instead)
#
# Missing keys (a locale that simply hasn't translated everything yet) are
# reported but do NOT fail the build - incomplete translations are normal
# and expected; this check exists to catch mistakes, not demand completeness.
set -euo pipefail

res_dir="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)/app/src/main/res"
default_file="$res_dir/values/strings.xml"

extract_keys() {
    grep -oE 'name="[^"]+"' "$1" | sed -e 's/^name="//' -e 's/"$//'
}

# Line numbers of apostrophes not preceded by a backslash, ignoring comments and
# CDATA blocks. Android's resource compiler refuses the whole file for these
# ("unescaped apostrophe in string"), so it is a failure, not a style note.
unescaped_apostrophes() {
    awk '
        { sub(/\r$/, ""); line = $0
          if (in_cdata) {
              if ((i = index(line, "]]>")) > 0) { line = substr(line, i + 3); in_cdata = 0 } else next
          }
          gsub(/<!--[^>]*-->/, "", line)
          while ((i = index(line, "<![CDATA[")) > 0) {
              rest = substr(line, i + 9)
              if ((j = index(rest, "]]>")) > 0) line = substr(line, 1, i - 1) substr(rest, j + 3)
              else { line = substr(line, 1, i - 1); in_cdata = 1 }
          }
          if (line ~ /(^|[^\\])'"'"'/) printf "%s ", NR
        }
    ' "$1"
}

ok=1

bad_apostrophes="$(unescaped_apostrophes "$default_file")"
if [ -n "$bad_apostrophes" ]; then
    echo "FAIL  app/src/main/res/values/strings.xml has unescaped apostrophe(s) on line(s): $bad_apostrophes- write \\' instead"
    ok=0
fi

default_keys_sorted="$(extract_keys "$default_file" | sort)"
default_dupes="$(echo "$default_keys_sorted" | uniq -d)"
if [ -n "$default_dupes" ]; then
    echo "FAIL  values/strings.xml has duplicate keys: $default_dupes"
    ok=0
fi
default_keys_unique="$(echo "$default_keys_sorted" | sort -u)"

for dir in "$res_dir"/values-*/; do
    strings_file="${dir}strings.xml"
    [ -f "$strings_file" ] || continue
    rel_path="app/src/main/res/values-$(basename "$dir" | sed 's/^values-//')/strings.xml"

    keys_sorted="$(extract_keys "$strings_file" | sort)"

    dupes="$(echo "$keys_sorted" | uniq -d)"
    if [ -n "$dupes" ]; then
        echo "FAIL  $rel_path has duplicate keys: $(echo "$dupes" | tr '\n' ' ')"
        ok=0
    fi

    bad_apostrophes="$(unescaped_apostrophes "$strings_file")"
    if [ -n "$bad_apostrophes" ]; then
        echo "FAIL  $rel_path has unescaped apostrophe(s) on line(s): $bad_apostrophes- write \\' instead"
        ok=0
    fi

    keys_unique="$(echo "$keys_sorted" | sort -u)"
    unknown="$(comm -23 <(echo "$keys_unique") <(echo "$default_keys_unique"))"
    if [ -n "$unknown" ]; then
        echo "FAIL  $rel_path has keys not in the default strings.xml: $(echo "$unknown" | tr '\n' ' ')"
        ok=0
    fi

    missing="$(comm -23 <(echo "$default_keys_unique") <(echo "$keys_unique"))"
    if [ -n "$missing" ]; then
        count="$(echo "$missing" | wc -l)"
        echo "      $rel_path is missing $count string(s) (not a failure): $(echo "$missing" | tr '\n' ' ')"
    fi
done

if [ "$ok" -eq 1 ]; then
    echo "OK    all locale files are consistent with the default strings.xml"
    exit 0
else
    exit 1
fi
