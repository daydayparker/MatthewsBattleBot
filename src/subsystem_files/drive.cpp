#include "main.h"

//HELPER FUNCTIONS
void setDrive(int left, int right){
    leftDriveMotorGroup.move(left);
    rightDriveMotorGroup.move(right);
}



//DRIVER CONTROL FUNCTIONS
void setDriveByDriver(){
    int leftJoystickValue = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
    int rightJoystickValue = controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y);
    if (abs(leftJoystickValue) < ANALOG_DEAD_ZONE){
        leftJoystickValue = 0;
    }
    if (abs(rightJoystickValue) < ANALOG_DEAD_ZONE){
        rightJoystickValue = 0;
    }
    setDrive(leftJoystickValue, rightJoystickValue);
}