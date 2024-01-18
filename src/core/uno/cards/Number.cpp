//
// Created by maiso on 16/01/2024.
//

#include "uno/cards/include/Number.hpp"

Number::Number(int v, Color c) : Card(v, c) {}

void Number::applyEffect() const {}

// OPERATOR OVERLOADS //
std::ostream& operator << (std::ostream& os, const Number& value) {
    os << "Number : Value -> " << value.get_value() << " Color -> " << value.get_color() << std::endl;
    return os;
}