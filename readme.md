### GroundControl
A macropad project using QMK, a 3D printer, some mechanical keyboard parts, human sacrifice, and a little bit of elbow grease.

to use with QMK firmware clone the repository: https://github.com/qmk/qmk_firmware

and follow the setup instructions: https://docs.qmk.fm/#/

place the groundcontrol folder under keyboards/handwired and run the command under the qmkfirmware folder:

``` QMK compile -kb handwired/groundcontrol -km default```

The case was 3D printed with a Monoprice Voxel 3D printer and was designed around the tolerances of the printer. It was assembled with 4x m2 x 12mm and 2x m2 x 8mm screws, 6 m2 nuts, and a QMK Proton C microcontroller. The rest of the controller is handwired.

