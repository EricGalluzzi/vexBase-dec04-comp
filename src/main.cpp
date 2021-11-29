/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       ericg                                                     */
/*    Created:      Thu Nov 18 2021                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// bar4                 motor_group   5, 15           
// Controller1          controller                    
// leftMotor            motor_group   3, 4            
// rightMotor           motor_group   13, 14          
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  
  
}
bool up = true;


void switchDirection(void){
  up = !up;
}

void userControl(void){
  while(1){
    if (up == true){
      //right motor 
    
      rightMotor.spin(directionType::fwd, Controller1.Axis2.position(percentUnits::pct), velocityUnits::pct);
      //left motor
      leftMotor.spin(directionType::fwd, Controller1.Axis3.position(percentUnits::pct), velocityUnits::pct);
    } else {
      rightMotor.spin(directionType::rev, Controller1.Axis2.position(percentUnits::pct), velocityUnits::pct);
      //left motor
      leftMotor.spin(directionType::rev, Controller1.Axis3.position(percentUnits::pct), velocityUnits::pct);

    }

  
  
    Controller1.ButtonL1.pressed(switchDirection);
    

    if(Controller1.ButtonR1.pressing()){
      //raise arm
      bar4.spin(directionType::fwd, 30, velocityUnits::pct);
    } else if(Controller1.ButtonR2.pressing()){
      //lower arm
      bar4.spin(directionType::rev, 30, velocityUnits::pct);
    } else {
      //stop arm
      bar4.stop(brakeType::hold);

    }
  }

}

