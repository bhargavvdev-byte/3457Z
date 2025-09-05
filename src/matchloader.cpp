#include "matchloader.hpp"

MatchLoader::MatchLoader(
    std::uint8_t piston_port
) : piston(piston_port){}

void MatchLoader::toggle() {
    piston.set_value(!piston.get_value());
}