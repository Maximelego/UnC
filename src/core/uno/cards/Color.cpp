//
// Created by maiso on 15/01/2024.
//

#include "include/Color.hpp"

// Surcharge de l'opérateur de sortie pour convertir MyEnum en std::ostream
std::ostream& operator << (std::ostream& os, const Color& value) {
    switch (value) {
        case Color::RED:
            os << "RED";
            break;
        case Color::GREEN:
            os << "GREEN";
            break;
        case Color::BLUE:
            os << "BLUE";
            break;
        case Color::YELLOW:
            os << "YELLOW";
            break;
        case Color::NONE:
            os << "NONE";
            break;
        default:
            os << "UnknownValue";
    }

    return os;
}