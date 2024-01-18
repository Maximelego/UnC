//
// Created by maiso on 15/01/2024.
//

#ifndef UNO_COLOR_H
#define UNO_COLOR_H

#include <iostream>

enum class Color {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    NONE
};

std::ostream& operator << (std::ostream& os, const Color& value);

#endif //UNO_COLOR_H
