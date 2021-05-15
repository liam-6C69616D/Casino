#include <iostream>
#include "src/Deck.h"

using namespace std;

int main() {
    Deck newDeck;
    newDeck.shuffle();
    for (int i=0; i<newDeck.getCards().size(); i++) {
        cout << newDeck.getCards().at(i).toString() << endl;
    }

    return 0;
}