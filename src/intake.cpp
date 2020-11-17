#include "main.h"

using namespace pros;

//Helper Functions
// void setIntake(int power) {
//   li = power;
//   ri = power;
// }

void intakeController() {
  while(true) { //So the function keeps looping
    if(controller.get_digital(E_CONTROLLER_DIGITAL_R1) == true) {
      ri.move(-127.0);
      li.move(-127.0);
    } else if(controller.get_digital(E_CONTROLLER_DIGITAL_R2) == true) {
      ri.move(127);
      li.move(127);
    } else if(controller.get_digital(E_CONTROLLER_DIGITAL_Y) == true) {
      ri.move(-127*.75);
      li.move(-127*.75);
    } else {
      ri.set_brake_mode(MOTOR_BRAKE_COAST);
      li.set_brake_mode(MOTOR_BRAKE_COAST);
      delay(100);
    }
    delay(10);
  }
}
