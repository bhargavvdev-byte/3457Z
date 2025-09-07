#pragma once

#include "pros/adi.hpp"

class MatchLoader{
    public:
        pros::adi::DigitalOut piston;
        bool value;

        void toggle();

        MatchLoader(
            std::uint8_t piston_port
        );

};
