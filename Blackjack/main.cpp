#include "Game.h"

int main() {
    Game game;

    while (true)
        game.playRound();
}

// g++ main.cpp Game.cpp Deck.cpp Hand.cpp Strategy.cpp -std=c++17