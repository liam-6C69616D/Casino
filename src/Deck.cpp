#include "Deck.h"
#include <algorithm>
#include <random>
#include <chrono>

Deck::Deck() {
    char ranks[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'J', 'Q', 'K'};
    char suits[4] = {'C', 'D', 'H', 'S'};

    for (int i=0; i<4; i++) {
        for (int j=0; j<13; j++) {
            Card tempCard(ranks[j], suits[i]);
            this->cards.push_back(tempCard);
        }
    }
}

void Deck::shuffle() {
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(this->cards.begin(), this->cards.end(), std::default_random_engine(seed));
}

Card Deck::deal() {
    Card dealtCard = this->cards.back();
    this->cards.pop_back();
    return dealtCard;
}