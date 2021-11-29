using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor_group bar4;
extern controller Controller1;
extern motor_group leftMotor;
extern motor_group rightMotor;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );