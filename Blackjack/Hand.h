#ifndef HAND_H
#define HAND_H

#include <vector>
#include <string>

class Hand {
private:
    std::vector<std::string> cards;

public:
    void addCard(std::string c);
    int value() const;
    bool isBust() const;
    bool canSplit() const;
    std::vector<std::string> getCards() const;

    void print() const;   // NEW
};

#endif