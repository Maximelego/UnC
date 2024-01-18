//
// Created by maiso on 15/01/2024.
//

#include "include/Card.hpp"

Card::Card(int v, Color c) {
    value = v;
    color = c;
}

int Card::get_value() const {
    return this->value;
}

Color Card::get_color() const {
    return this->color;
}

std::ostream& operator << (std::ostream& os, const Card& value) {
    os << "Card : Value -> " << value.get_value() << " Color -> " << value.get_color() << std::endl;
    return os;
}
