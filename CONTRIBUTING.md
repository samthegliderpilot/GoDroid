# Contributing to GoDroid

## Translations

You don't need to know Android, Java, or git to help translate GoDroid.

1. Open the **[translation page](https://samthegliderpilot.github.io/GoDroid/translate.html)**.
   Pick your language - if it's already partly translated, every string
   that's done already shows up pre-filled, so you're only filling in what's
   missing or fixing what's wrong, not starting from scratch.
2. Type your translations into the table, right next to the English text
   they correspond to.
3. Click "Submit on GitHub" - it opens a pre-filled GitHub issue with just
   the lines you changed. Submit that issue. A maintainer reviews it and
   turns it into a pull request; you don't need to do anything else.

If the page isn't working for you, or your language isn't listed yet, you
can do the same thing by hand: open a
**[Translation issue](../../issues/new?template=translation.yml)** directly
and fill in the language and `key = translated text` lines yourself - the
English text and key for every string is in
[`app/src/main/res/values/strings.xml`](app/src/main/res/values/strings.xml).

If you're comfortable with git instead, you're welcome to edit the
`app/src/main/res/values-<locale>/strings.xml` file yourself and open a pull
request directly - either way works.

### About the translation page

[`docs/translate.html`](docs/translate.html) is a single static page (no
build step, no backend) hosted on GitHub Pages. It fetches the current
English strings and your chosen language's existing translations straight
from `main` at `raw.githubusercontent.com`, so it's always showing the real,
current state of the app - never stale. It never talks to GitHub on your
behalf beyond that: submitting still opens an ordinary pre-filled "new
issue" page for you to review and send yourself, the same mechanism as
opening the [translation issue](../../issues/new?template=translation.yml)
template directly.

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
