#include "main.h"

void bladeLoop(void*){
    if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R1))
		{
			isBladeSpinning = !isBladeSpinning;
			if (isBladeSpinning){
				bladeMotorGroup.move(MAX_VOLTAGE);
			}
			else{
				bladeMotorGroup.move(MAX_VOLTAGE);
			}

		}
}