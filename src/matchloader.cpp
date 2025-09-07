#include "matchloader.hpp"

MatchLoader::MatchLoader(
    std::uint8_t piston_port
) : piston(piston_port) { value = false; }

void MatchLoader::toggle() {
    value = !value;
    piston.set_value(value);
}