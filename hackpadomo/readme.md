# hackpadomo

A 3-button macropad with a rotary encoder and OLED screen built on the RP2040.

* Keyboard Maintainer: [LeonOmo](https://github.com/LeonOmo)
* Hardware Supported: XIAO RP2040
* Hardware Availability: 

# Compilation

Build the firmware binary with:

    qmk compile -kb hackpadomo -km default

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
