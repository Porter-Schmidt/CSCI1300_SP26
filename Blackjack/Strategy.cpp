#include "Strategy.h"
#include <fstream>

Strategy::Strategy() {
    std::ifstream f1("hard_totals.json");
    std::ifstream f2("soft_totals.json");
    std::ifstream f3("pair_splitting.json");

    f1 >> hard;
    f2 >> soft;
    f3 >> pair;
}

std::string Strategy::getMove(const Hand& player, std::string dealer) {
    auto cards = player.getCards();

    if (player.canSplit()) {
        std::string key = cards[0] + "," + cards[1];
        if (pair.contains(key))
            return pair[key][dealer];
    }

    int total = player.value();

    if (hard.contains(std::to_string(total)))
        return hard[std::to_string(total)][dealer];

    return "H";
}