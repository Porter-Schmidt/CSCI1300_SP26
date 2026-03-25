#include "Deck.h"
#include <algorithm>
#include <random>

Deck::Deck() {
    std::string ranks[] =
        {"2","3","4","5","6","7","8","9","10","J","Q","K","A"};

    for (std::string r : ranks)
        for (int i = 0; i < 4; i++)
            cards.push_back(r);

    std::shuffle(cards.begin(), cards.end(),
        std::default_random_engine(std::random_device{}()));
}

std::string Deck::draw() {
    std::string c = cards.back();
    cards.pop_back();
    return c;
}