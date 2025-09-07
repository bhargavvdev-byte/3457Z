#include "main.h"
#include "pros/abstract_motor.hpp"
#include <utility>

Intake::Intake(std::uint8_t intake_motor_port, std::uint8_t outake_motor_port, std::uint8_t indexer_motor_port)
    : intake_motor(intake_motor_port), outake_motor(outake_motor_port), indexer_motor(indexer_motor_port){
        intake_motor.set_brake_mode(pros::MotorBrake::brake);
        outake_motor.set_brake_mode(pros::MotorBrake::coast);
        indexer_motor.set_brake_mode(pros::MotorBrake::brake);
    }

void Intake::intake(int voltage) {
    if (voltage == 0) intake_motor.brake();
    intake_motor.move(voltage);
}


void Intake::outake(int voltage) {
    if (voltage == 0) outake_motor.brake(); indexer_motor.brake();

    outake_motor.move(voltage);
    indexer_motor.move(abs(voltage));
}
