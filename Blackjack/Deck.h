#ifndef DECK_H
#define DECK_H

#include <vector>
#include <string>

class Deck {
private:
    std::vector<std::string> cards;

public:
    Deck();
    std::string draw();
};

#endif