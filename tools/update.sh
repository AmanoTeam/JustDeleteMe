OLD_APP_VERSION="$(grep --only-matching --perl-regexp 'versionName\s=\s\"\K([0-9\.]+)' './app/build.gradle')"
NEW_APP_VERSION=$(python -c "print(f'{${OLD_APP_VERSION} + 0.1:.1f}')")

OLD_APP_VERSION_CODE="$(grep --only-matching --perl-regexp 'versionCode\s=\s\K([0-9\.]+)' './app/build.gradle')"
NEW_APP_VERSION_CODE=$(python -c "print(${OLD_APP_VERSION_CODE} + 1)")

git submodule update --init --remote --depth=1
python -B tools/we_entries.h.py

git clean -fd

git diff --quiet && exit

sed \
	--in-place \
	--expression "s/versionName = \"${OLD_APP_VERSION}\"/versionName = \"${NEW_APP_VERSION}\"/g" \
	--expression "s/versionCode = ${OLD_APP_VERSION_CODE}/versionCode = ${NEW_APP_VERSION_CODE}/g" \
	'./app/build.gradle'
