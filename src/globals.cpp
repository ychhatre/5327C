#include "main.h"

using namespace pros;

//Base Motors
pros:: Motor fl(12, E_MOTOR_GEARSET_18, true, pros:: E_MOTOR_ENCODER_COUNTS);
pros:: Motor bl(11, E_MOTOR_GEARSET_18, true, pros:: E_MOTOR_ENCODER_COUNTS);
pros:: Motor fr(18, E_MOTOR_GEARSET_18, true, pros:: E_MOTOR_ENCODER_COUNTS);
pros:: Motor br(19, E_MOTOR_GEARSET_18, true, pros:: E_MOTOR_ENCODER_COUNTS);

//Intake Motors
pros:: Motor ri(9, E_MOTOR_GEARSET_18, true, pros:: E_MOTOR_ENCODER_COUNTS);
pros:: Motor li(1, E_MOTOR_GEARSET_18, true, pros:: E_MOTOR_ENCODER_COUNTS);

//Rollers
pros:: Motor mr(10, E_MOTOR_GEARSET_18, true, pros:: E_MOTOR_ENCODER_COUNTS);
pros:: Motor tr(2, E_MOTOR_GEARSET_18, true, pros:: E_MOTOR_ENCODER_COUNTS);

pros:: Controller controller(E_CONTROLLER_MASTER);  
