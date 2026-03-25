#include "Hand.h"

void Hand::addCard(std::string c) {
    cards.push_back(c);
}

int Hand::value() const {
    int total = 0, aces = 0;

    for (auto c : cards) {
        if (c == "A") {
            total += 11;
            aces++;
        }
        else if (c=="K"||c=="Q"||c=="J")
            total += 10;
        else
            total += stoi(c);
    }

    while (total > 21 && aces > 0) {
        total -= 10;
        aces--;
    }

    return total;
}

bool Hand::isBust() const {
    return value() > 21;
}

bool Hand::canSplit() const {
    return cards.size() == 2 && cards[0] == cards[1];
}

std::vector<std::string> Hand::getCards() const {
    return cards;
}

#include <iostream>

void Hand::print() const {
    for (auto c : cards)
        std::cout << c << " ";
}