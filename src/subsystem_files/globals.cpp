#include "main.h"

//DRIVE MOTORS
//{FRONT, BACK}
//{-1, -2}
//{3, 4}
//{LEFT FRONT, LEFT BACK, RIGHT FRONT, RIGHT BACK}
//{-1, -2, 3, 4}
pros::MotorGroup leftDriveMotorGroup({-3, -4}, pros::v5::MotorGears::blue, pros::v5::MotorUnits::degrees);
pros::MotorGroup rightDriveMotorGroup({1, 2}, pros::v5::MotorGears::blue, pros::v5::MotorUnits::degrees);
pros::MotorGroup driveMotorGroup({-3, -4, 1, 2}, pros::v5::MotorGears::blue, pros::v5::MotorUnits::degrees);

//BLADE MOTORS
//{-5, 6}
pros::MotorGroup bladeMotorGroup({-5, 6}, pros::v5::MotorGears::green, pros::v5::MotorUnits::degrees);

//CONTROLLER
pros::Controller controller(pros::E_CONTROLLER_MASTER);
