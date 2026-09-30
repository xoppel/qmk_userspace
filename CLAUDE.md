# CLAUDE.md

QMK External Userspace for the `xoppel` keymaps. See `README.md` for the board list.

## Layout

- `/s/storage/keyboard/qmk/qmk_firmware` is the upstream QMK checkout (`user.qmk_home`). Do not commit keymaps there.
- This repo (`qmk_userspace`) is the overlay (`user.overlay_dir`). All keymaps live here.
- `qmk_firmware/keyboards/<custom board>` entries are symlinks into this repo. `bash link-boards.sh` creates them. Run it after a new clone, an upstream pull, or a new custom board. QMK does not find a board with no upstream folder without the link.
- `qmk.json` lists the build targets. Keep it in sync with the `keyboards/` tree and `README.md`.
- `Makefile` is the stock userspace proxy. Do not edit it.

## Keymap convention

- Path: `keyboards/<vendor>/<board>/keymaps/xoppel/` with `keymap.c`, `rules.mk`, and `config.h` only when needed.
- All boards use the same `xoppel` keymap name and share one layer design.
- Layer 0 bottom row starts with `MO(1)`, `KC_LGUI`, `KC_LALT` and ends with an Fn key or `KC_RALT`.
- Layer 1 binds `Fn + H/J/K/L` to Left, Down, Up, Right. `KC_INS` is on the row above, next to `KC_PAUS`. It is not at `Fn + ;`, because it fires by accident.
- Keep a way to reach `QK_BOOT` on every board. Do not put it on the key that you hold to reach the layer.
- Use current QMK APIs. Older keymaps were modernized one commit per board.
- Board definitions in `keyboards/` outside `keymaps/` exist only for boards missing from upstream.

## Custom boards

1. Put `keyboard.json` (not `info.json`) and any `*.c`, `*.h` files in `keyboards/<vendor>/<board>/`.
2. Run `bash link-boards.sh`.
3. Add the keymap with `qmk userspace-add`.
4. For an unmerged upstream PR, take the files from the PR branch with `gh api` and update the old macro names. The Transition Lite needed `keyboard.json` and no `rules.mk`.
5. For a vendor binary, read the USB descriptor, GPIO pin arrays and peripheral base addresses. Use `arm-none-eabi-objdump -D -b binary -marm -Mforce-thumb`. Pair the result with the VIA JSON. Test on hardware before you trust it.

## Commands

```bash
qmk compile -kb <target> -km xoppel
qmk userspace-compile
qmk userspace-list
qmk userspace-add -kb <target> -km xoppel
```

## Rules

- Rebuild every affected target after a change to shared or board files.
- Update `qmk.json` and the `README.md` table when a board is added or removed.
- Do not commit `*.hex`, `*.bin`, or `*.uf2`.
- Commit one board per commit. Use the message style `Unify <Board> xoppel keymap`.
- Do not push unless asked.

## Apollo 87HLT-ARC2

In use. The original unit died and did not enumerate over USB, but it now has replacement hardware, so the board is active and its `xoppel` keymap is maintained and unified like every other target. Rebuild it with the shared changes. Do not resume the abandoned USB debug work on the original dead unit.
