#!/usr/bin/env bash
# Symlink custom board definitions from this repo into qmk_firmware so QMK can find them.
set -euo pipefail

here="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
qmk_home="$(qmk config -ro user.qmk_home | cut -d= -f2)"

find "$here/keyboards" -name keyboard.json -not -path '*/keymaps/*' | while read -r f; do
    src="$(dirname "$f")"
    rel="${src#"$here"/}"
    dst="$qmk_home/$rel"
    if [ -L "$dst" ]; then
        continue
    elif [ -e "$dst" ]; then
        echo "skip (exists in upstream): $rel"
        continue
    fi
    mkdir -p "$(dirname "$dst")"
    ln -s "$src" "$dst"
    echo "linked: $rel"
done
