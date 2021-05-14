#pragma once

class Card {
    public:
        Card(char r, char s);
        char getRank() const {return rank;}
        char getSuit() const {return suit;}
        std::string toString() const;
        bool operator== (Card other) const {
            if (other.getRank() == this->rank && other.getSuit() == this->suit) {
                return true;
            } else {
                return false;
            }
        }

    private:
        char rank;
        char suit;

};