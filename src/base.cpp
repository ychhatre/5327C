#include "main.h"

using namespace pros;

void baseControl(void) {
  while (true) {
    fl.move(controller.get_analog(ANALOG_LEFT_Y)*1.1 // Not sure why we multiply by 1.1
    + controller.get_analog(ANALOG_LEFT_X)*1.1  //
    + controller.get_analog(ANALOG_RIGHT_X)*0.6);

    bl.move(controller.get_analog(ANALOG_LEFT_Y)*1.1
    - controller.get_analog(ANALOG_LEFT_X)*1.1
    + controller.get_analog(ANALOG_RIGHT_X) * 0.6);

    fr.move(-controller.get_analog(ANALOG_LEFT_Y) * 1.1
    + controller.get_analog(ANALOG_LEFT_X) * 1.1
    + controller.get_analog(ANALOG_RIGHT_X) * 0.6);

    br.move(
      -controller.get_analog(ANALOG_LEFT_Y) * 1.1
    + controller.get_analog(ANALOG_LEFT_X) * 1.1
    + controller.get_analog(ANALOG_RIGHT_X)*0.6);
  }
}
