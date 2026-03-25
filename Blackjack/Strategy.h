#ifndef STRATEGY_H
#define STRATEGY_H

#include <string>
#include "Hand.h"
#include "json.hpp"

class Strategy {
private:
    nlohmann::json hard, soft, pair;

public:
    Strategy();
    std::string getMove(const Hand& player, std::string dealerUp);
};

#endif