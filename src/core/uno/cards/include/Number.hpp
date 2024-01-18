//
// Created by maiso on 16/01/2024.
//

#ifndef NUMBER_HPP
#define NUMBER_HPP

#include <iostream>

#include "Card.hpp"

class Number : public Card {
public:
    Number(int v, Color c);

    // Special methods.
    void applyEffect() const override;
};

std::ostream& operator << (std::ostream& os, const Number& value);


#endif //NUMBER_HPP
