# xoppel QMK userspace

Custom `xoppel` keymaps for my keyboards, kept outside the QMK firmware tree with QMK External Userspace.

## Boards

Every board has a keymap at `keyboards/<path>/keymaps/xoppel/` and a build target in `qmk.json`.

| Board | Target (`-kb`) | MCU |
| --- | --- | --- |
| AcheronProject Apollo87HLT Alpha-RC2 | `acheron/apollo/87hltarc2` | STM32F401 |
| CannonKeys Instant60 | `cannonkeys/instant60` | STM32F072 |
| CannonKeys Obliterated75 | `cannonkeys/obliterated75` | STM32F072 |
| Clueboard 66% rev4 | `clueboard/66/rev4` | STM32F303 |
| Backprop Studio Doro67 Multi | `doro67/multi` | atmega32u4 |
| Hasu FC660C | `fc660c` | atmega32u4 |
| Geonworks Glare 65 Solder | `geonworks/glare_65` | RP2040 |
| Geonworks Glare 65 Hotswap | `geonworks/glare_65_hs` | RP2040 |
| CannonKeys Vector | `cannonkeys/vector` | STM32F072 |
| KBDFans DZ60 | `dz60` | atmega32u4 |
| Qwertykeys Neo80 Cu (wired) | `qwertykeys/neo80cu` | STM32F072 |
| Swagkeys Transition Lite | `yandrstudio/transition_lite` | STM32F103 |
| Graystudio COD67 | `gray_studio/cod67` | atmega32u4 |
| Primus75 (ilumkb) | `ilumkb/primus75` | atmega32u4 |
| KBDfans KBD67 MKII RGB v2 | `kbdfans/kbd67/mkiirgb/v2` | atmega32u4 |
| Lx3 FAve 84H | `linworks/fave84h` | atmega32u4 |
| Lx3 FAve 87 | `linworks/fave87` | atmega32u4 |
| Lx3 FAve 87H | `linworks/fave87h` | atmega32u4 |
| Mechlovin Hex-4B Rev.2 | `mechlovin/hex4b/rev2` | STM32F103 |
| Noxary 268.2 RGB | `noxary/268_2_rgb` | atmega32u4 |
| SmithRune Iron165R2 (F411) | `smithrune/iron165r2/f411` | STM32F411 |
| Yiancar-Designs Nebula68 | `spaceholdings/nebula68` | STM32F303 |
| RAMA WORKS M6-B | `wilba_tech/rama_works_m6_b` | atmega32u4 |
| RAMA WORKS U80-A | `wilba_tech/rama_works_u80_a` | atmega32u4 |
| wilba.tech WT60-H2 | `wilba_tech/wt60_h2` | atmega32u4 |
| ZealPC Zeal60 | `wilba_tech/zeal60` | atmega32u4 |
| ZealPC Zeal65 | `wilba_tech/zeal65` | atmega32u4 |
| wilba.tech WT65-CX (THERMAL+) | `wilba_tech/wt65_cx` | atmega32u4 |
| SINGA Kohaku | `zeix/singa/kohaku` | RP2040 |

## Boards defined here

These boards are not in upstream QMK. Their definitions live in this repo.

- `geonworks/glare_65`
- `geonworks/glare_65_hs`
- `acheron/apollo/87hltarc2` (in use on replacement hardware)
- `qwertykeys/neo80cu` (rebuilt from the vendor `.bin` and VIA JSON, wired only, WS2812 on B3 with 16 LEDs, 7U layouts)
- `wilba_tech/wt65_cx` (rebuilt from the vendor `.hex` and VIA JSON, per-key RGB through two IS31FL3731 drivers, uses QMK RGB matrix, not Wilba's VIA lighting menu)
- `yandrstudio/transition_lite` (from the closed PR #24071, VIA is off because it does not fit in flash)

Run `bash link-boards.sh` after a clone or an upstream `qmk_firmware` update. It links these boards into `qmk_firmware/keyboards/`.

## Setup

```bash
qmk config user.qmk_home=/s/storage/keyboard/qmk/qmk_firmware
qmk config user.overlay_dir="$(realpath .)"
qmk config user.keymap=xoppel
```

## Build

```bash
qmk compile -kb <target> -km xoppel
qmk userspace-compile
```

Firmware files land in the `qmk_firmware` directory. This repo ignores `*.hex`, `*.bin`, and `*.uf2`.

## Add a board

```bash
qmk new-keymap -kb <target> -km xoppel
qmk userspace-add -kb <target> -km xoppel
```

Add the board to the table above.
