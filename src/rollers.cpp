#include "main.h"

void rollerController() {
  while(true){
    if(controller.get_digital(E_CONTROLLER_DIGITAL_L1) == true) {
      mr.move(127);
      tr.move(127);
    } else if (controller.get_digital(E_CONTROLLER_DIGITAL_L2) == true){
      mr.move(-127*.7);
      tr.move(-127*0.7);
    } else {
      mr.set_brake_mode(E_MOTOR_BRAKE_COAST);
      tr.set_brake_mode(E_MOTOR_BRAKE_COAST);
      delay(100);
    }
    delay(10); 
  }
}
