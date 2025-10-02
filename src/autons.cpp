#include "autons.hpp"
#include "main.h"

void moveforwardauto() {
    chassis.setPose(-66.24,13.778, 90);

    intake.intake(127);

    
    // move to balls in middle
    intake.intake(127);
    chassis.moveToPoint(-25.131, 18.286, 1200,{.maxSpeed=60});
    chassis.turnToHeading(90,1200);
    chassis.waitUntilDone();
    // move to score  middle goal  
    chassis.moveToPoint(-11.039,  11.643, 1200, {.maxSpeed=60});
    chassis.turnToHeading(315,1200);   
    chassis.waitUntilDone();
    intake.outake(-700);
    chassis.waitUntilDone();

 
 
   
    pros::delay(3000);
    
}  
   