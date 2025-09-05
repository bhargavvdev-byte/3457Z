#pragma once

#include "pros/motors.hpp"
class Intake {
    public:
        pros::Motor intake_motor;
        pros::Motor outake_motor;
        Intake(
            std::uint8_t intake_motor_port, std::uint8_t outake_motor_port
        );

        void intake(); 

        void outake();
};