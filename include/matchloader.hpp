#pragma once

#include "pros/adi.hpp"

class MatchLoader{
    public:
        pros::adi::Port left_piston;
        pros::adi::Port right_piston;

        void toggle();

        MatchLoader(
            std::uint8_t left_piston_port, 
            std::uint8_t right_piston_port
        );

};
