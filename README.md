# Marware Corne keyboard QMK firmware
# Quick setup
Assuming you have already installed qmk cli and have cloned the qmk_firmware repo:
```
git clone https://github.com/marwaree/crkbd-qmk.git
cd crkbd-qmk
qmk config user.overlay_dir="$(pwd)"
```
You can set it as the default keymap with this:
```
qmk config user.keyboard=crkbd/rev4_1/standard
qmk config user.keymap=marwaree
```
