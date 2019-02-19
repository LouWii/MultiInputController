# Libraries



## HID-Project

Handles the keyboard part (send keyboard key presses etc...).

Needs to be modified to not conflict with MIDI lib. 

In `KeyboardAPI.hpp` and `ImprovedKeylayouts.h`, change instances of `SHIFT` to `KSHIFT`. Should do the trick (to be tested...).

## MIDI_controller

Handles MIDI output through the rotary encoders. Has an internal way for changing *layers* with *Banks* which is pretty handy. However, not sure how we would handle another role for the encoders if we have to.

Maybe `if (midiEncoders){ MIDI_Controller.refresh(); }` ?

## Screen library

To be determined, based on memory consumption. We need a way to write text to specific part of the screen as well as displaying "images".