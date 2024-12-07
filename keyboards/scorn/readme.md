# Scorn

![scorn](imgur.com image replace me!)

A 42-key split keyboard inspired by the Corne (crkbd) by Foostan but with increased pinky stagger and splayed columns. Designed with per-key RGB and dual OLED screens in mind.

* Keyboard Maintainer: [fubarphill](https://github.com/fubarphill)
* Hardware Supported: Built to use Pro Micro RP2040 controllers.
* Hardware Availability: *Links to where you can find this hardware*

Compiling example for this keyboard (after setting up your build environment):

    qmk compile -kb scorn -km default

Flashing example for this keyboard:

    Once in bootloader mode, a removable drive should appear on your computer. Copy the generated uf2 file from the qmk_firmware root directory
    to this removable drive. The controller will reset after flashing is complete.


See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard or press the reset button
* **Physical reset button**: Quickly double-press the reset button
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available