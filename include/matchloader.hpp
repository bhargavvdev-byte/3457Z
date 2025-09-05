#pragma once

#include "pros/adi.hpp"

class MatchLoader{
    public:
        pros::adi::Port piston;

        void toggle();

        MatchLoader(
            std::uint8_t piston_port
        );

};
