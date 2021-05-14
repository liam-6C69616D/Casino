#include <iostream>
#include <stdexcept>
#include <sstream>
#include "Card.h"

using namespace std;

Card::Card(char r, char s) {
    char valid_ranks[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'J', 'Q', 'K'};
    char valid_suits[4] = {'C', 'D', 'H', 'S'};
    bool setRank = false;
    bool setSuit = false;

    for (int i=0; i<(sizeof(valid_ranks)/sizeof(valid_ranks[0])); i++) {
        if (r == valid_ranks[i]) {
            setRank = true;
        }
    }

    for (int i=0; i<(sizeof(valid_suits)/sizeof(valid_suits[0])); i++) {
        if (s == valid_suits[i]) {
            setSuit = true;
        }
    }

    if (setRank && setSuit) {
        this->rank = r;
        this->suit = s;
    } else {
        throw invalid_argument("Invalid Rank or Suit!");
    }
}

string Card::toString() const {
    ostringstream out;
    out << this->getRank() << this->getSuit() << endl;
    return out.str();
}