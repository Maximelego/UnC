//
// Created by maiso on 18/01/2024.
//

#include "uno/cards/include/SkipTurn.hpp"

SkipTurn::SkipTurn(Color color) : Card(SKIP_TURN_VALUE, color) {

}

void SkipTurn::applyEffect() const {}

// OPERATOR OVERLOADS //
std::ostream& operator << (std::ostream& os, const SkipTurn& value) {
  os << "SkipTurn : Value -> " << value.get_value() << " Color -> " << value.get_color() << std::endl;
  return os;
}
