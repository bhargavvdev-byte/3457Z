#include "autons.hpp"
#include "main.h"


   
void moveforwardauto() {
chassis.setPose(-132.858,16.28, 65);

    intake.intake(127);
chassis.moveToPoint(-46.958, 64.343, 1200 ,{.maxSpeed=45});
    


 
 
   
    pros::delay(3000);
}