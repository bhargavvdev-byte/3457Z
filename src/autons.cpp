#include "autons.hpp"
#include "main.h"

void moveforwardauto() {
    chassis.setPose(-61.969,17.28, 90);

    intake.intake(127);

    
    // move to balls in middle
    chassis.moveToPoint(-37.209,8.825,1200,{.maxSpeed=90});
    chassis.waitUntilDone();
    chassis.turnToPoint(-22.916, 22.715, 1200);
    chassis.waitUntilDone();
    chassis.moveToPoint(-22.916, 22.715, 1200, {.maxSpeed=70});    
    chassis.waitUntilDone();
    pros::delay(1000);
    
    // move to matchloader
    chassis.moveToPoint(-50.936,42.67, 1200, {.maxSpeed=90});
    chassis.waitUntilDone();
    chassis.turnToHeading(270,1200);
    
    // drop matchloader
    matchloader.toggle();

    chassis.moveToPoint( -64.988,42.67, 1200, {.maxSpeed=50});
    chassis.waitUntilDone();

    // wait for balls to go into intake
    pros::delay(3000);

    //stop intake and move to goal
    chassis.moveToPoint(-30.358,42.871,1200, {.forwards=false,.maxSpeed=50});
    chassis.waitUntilDone();
    intake.outake(127);
}