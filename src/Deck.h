#pragma once

#include <vector>
#include "Card.h"

class Deck {
    public:
        Deck();
        std::vector<Card> getCards() const {return cards;};
        void shuffle();
        Card deal();

    private:
        std::vector<Card> cards{};

};