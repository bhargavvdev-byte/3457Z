#include "autons.hpp"
#include "main.h"

void moveforwardauto() {
    chassis.setPose(-66.599,12.247, 90);

    intake.intake(127);

    
    // move to balls in middle
    intake.intake(127);
    chassis.moveToPoint(-22.916, 22.715, 1200,{.maxSpeed=70});
    chassis.turnToHeading(270,1200);
    intake.intake(127); 
    chassis.waitUntilDone();
    // move to score    
    chassis.moveToPoint(-65.794,  38.819, 1200, {.maxSpeed=70});
    chassis.waitUntilDone();

    chassis.turnToHeading(90,  1200);

    chassis.waitUntilDone();  
    intake.outake( 127);  
    chassis.moveToPoint(-27.747, 46.871 ,  1200);
    chassis.waitUntilDone();
    // move to matchloader
    // drop matchloader
    // wait for balls to go into intake
    pros::delay(3000);
    
}  
   