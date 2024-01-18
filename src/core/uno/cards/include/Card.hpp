//
// Created by maiso on 15/01/2024.
//

#ifndef UNO_CARD_H
#define UNO_CARD_H

#include <iostream>

#include "Color.hpp"

class Card {

private:
    int m_value;
    Color m_color;

public:
    // Constructor //
    Card(int v, Color c);

    // Getters //
    int get_value() const;
    Color get_color() const;

    // Special methods.
    virtual void applyEffect() const = 0;
};

std::ostream& operator << (std::ostream& os, const Card& value);

#endif //UNO_CARD_H
