#ifndef GAME_H
#define GAME_H

#include "Deck.h"
#include "Hand.h"
#include "Strategy.h"

class Game {
private:
    Deck deck;
    Strategy strategy;
    int money;

public:
    Game();
    void playRound();
};

#endif