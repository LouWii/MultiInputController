
#include <HID-Project.h>
#include <HID-Settings.h>

#define USE_ROTARY_ENCODER
#include <MIDI_Controller.h>

const uint8_t Channel1 = 1;       // MIDI channel 1
const uint8_t Channel2 = 2;       // MIDI channel 2
const uint8_t Controller = 0x14; // MIDI Control Change controller number https://www.midi.org/specifications/item/table-3-control-change-messages-data-bytes-2
const int speedMultiply = 1; // No change in speed of the encoder (number of steps is multiplied by 1)

RotaryEncoder encoder1(4, 5, Controller, Channel1, speedMultiply, NORMAL_ENCODER, TWOS_COMPLEMENT);
RotaryEncoder encoder2(6, 7, Controller, Channel2, speedMultiply, NORMAL_ENCODER, TWOS_COMPLEMENT);
RotaryEncoder encoder3(99, 99, Controller, Channel2, speedMultiply, NORMAL_ENCODER, TWOS_COMPLEMENT);
RotaryEncoder encoder4(99, 99, Controller, Channel2, speedMultiply, NORMAL_ENCODER, TWOS_COMPLEMENT);
RotaryEncoder encoder5(99, 99, Controller, Channel2, speedMultiply, NORMAL_ENCODER, TWOS_COMPLEMENT);
RotaryEncoder encoder6(99, 99, Controller, Channel2, speedMultiply, NORMAL_ENCODER, TWOS_COMPLEMENT);
RotaryEncoder encoder7(99, 99, Controller, Channel2, speedMultiply, NORMAL_ENCODER, TWOS_COMPLEMENT);
RotaryEncoder encoder8(99, 99, Controller, Channel2, speedMultiply, NORMAL_ENCODER, TWOS_COMPLEMENT);

Bank bank(2);

void setup() {
  // Keyboard for standard keyboard keys
  Keyboard.begin();
  // Consumer is for media keys, shortcut keys...
  Consumer.begin();

  bank.add(encoder1, Bank::CHANGE_CHANNEL);
  bank.add(encoder2, Bank::CHANGE_CHANNEL);
}

void loop() {
  

  MIDI_Controller.refresh();
}
