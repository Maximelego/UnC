//
// Created by maiso on 18/01/2024.
//

#ifndef MY_PROJECT_SKIPTURN_HPP
#define MY_PROJECT_SKIPTURN_HPP

#include "Card.hpp"
#include "Color.hpp"

#define SKIP_TURN_VALUE 20

class SkipTurn : public Card {

public:
  SkipTurn(Color color);

  // Special methods.
  void applyEffect() const override;
};

std::ostream& operator << (std::ostream& os, const SkipTurn& value);

#endif // MY_PROJECT_SKIPTURN_HPP
