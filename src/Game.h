#pragma once

#include <stdlib.h>
#include <map>
#include <string>

class Game {
    public:
        virtual void playRound() const;
        void endGame() {exit(0);}
    protected:
        int round;
        std::map<std::string, int> wins;
};