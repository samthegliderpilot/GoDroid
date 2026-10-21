# Contributing to GoDroid

## Translations

You don't need to know Android, Java, or git to help translate GoDroid.

1. Open a **[Translation issue](../../issues/new?template=translation.yml)**.
2. Fill in the language and the strings you're adding or fixing, one per
   line, as `key = translated text`. The English text and the key for every
   string is in
   [`app/src/main/res/values/strings.xml`](app/src/main/res/values/strings.xml) -
   open that file to see what each key means. You only need to include the
   strings you're adding or changing, not the whole file.
3. Submit the issue. A maintainer reviews it and turns it into a pull
   request; you don't need to do anything else.

If you're comfortable with git instead, you're welcome to edit the
`app/src/main/res/values-<locale>/strings.xml` file yourself and open a pull
request directly - either way works.

### How a translation issue becomes a change

A filled-out translation issue doesn't change anything by itself. Once a
maintainer reviews it and adds the `translation-ready` label, a GitHub Action
([`.github/workflows/translation-to-pr.yml`](.github/workflows/translation-to-pr.yml))
parses the issue, applies the `key = value` lines to the right
`values-<locale>/strings.xml` (creating it if the language is new), and opens
a pull request from the result. That PR still goes through normal review
before merging - the automation saves the maintainer from retyping
translations by hand, it doesn't skip review.

The same script that applies translations
([`scripts/apply_translation_issue.sh`](scripts/apply_translation_issue.sh))
only accepts keys that already exist in the default `strings.xml`, so a typo
in a key name gets flagged rather than silently creating a dead string.
Every push also runs
[`scripts/check_locale_sync.sh`](scripts/check_locale_sync.sh) in CI, which
fails if any locale file has a key that isn't in the default `strings.xml`
(a mistake) - an incomplete translation is fine and expected, an invalid one
isn't.
