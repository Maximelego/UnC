//
// Created by maiso on 15/01/2024.
//

#include <iostream>

#include "core/uno/cards/include/Color.hpp"
#include "uno/cards/include/Number.hpp"

int main() {
    Number c = Number(1, Color::RED);

    std::cout << c << "\n";

    return 0;
}