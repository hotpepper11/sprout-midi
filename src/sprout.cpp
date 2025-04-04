#include "../include/sprout.hpp"

namespace sprout {
    Sprout::Sprout(const std::string& filename) : filename_(filename) {}

    std::string Sprout::parse() {
        return "Hello " + filename_;
    }
}