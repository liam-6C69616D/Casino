#pragma once

#include <vector>
#include "

class Deck {
    public:
        Deck();
        void shuffle() const;
        void deal() const;

    private:
        vector<Card> cards;

};