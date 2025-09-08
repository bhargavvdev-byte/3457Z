#include "autons.hpp"
#include "main.h"

void moveforwardauto() {
    chassis.setPose(-149.52,40.208, 90);

    intake.intake(127);

    chassis.moveToPoint(-56.24, 55.268, 1200, {.maxSpeed=90});    
    chassis.waitUntilDone();

    chassis.moveToPoint(-125.228,119.884, 1200, {.maxSpeed=90});
    chassis.waitUntilDone();
    chassis.turnToHeading(270,1200);
    
}