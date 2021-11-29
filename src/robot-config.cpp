#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor bar4MotorA = motor(PORT5, ratio36_1, false);
motor bar4MotorB = motor(PORT15, ratio36_1, false);
motor_group bar4 = motor_group(bar4MotorA, bar4MotorB);
controller Controller1 = controller(primary);
motor leftMotorMotorA = motor(PORT3, ratio18_1, false);
motor leftMotorMotorB = motor(PORT4, ratio18_1, false);
motor_group leftMotor = motor_group(leftMotorMotorA, leftMotorMotorB);
motor rightMotorMotorA = motor(PORT13, ratio18_1, false);
motor rightMotorMotorB = motor(PORT14, ratio18_1, false);
motor_group rightMotor = motor_group(rightMotorMotorA, rightMotorMotorB);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}