//
// Created by maiso on 18/01/2024.
//

#ifndef UNO_CARDDECKFACTORY_HPP
#define UNO_CARDDECKFACTORY_HPP

#include "uno/cards/include/CardDeck.hpp"


class CardDeckFactory {

public:
  static CardDeck* createBaseUnoDeck();

};

#endif // UNO_CARDDECKFACTORY_HPP
