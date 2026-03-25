#include "Game.h"
#include <iostream>

Game::Game() {
    money = 1000;
}

void Game::playRound() {

    int bet;
    std::cout << "Money: $" << money << "\nBet: ";
    std::cin >> bet;

    Hand player, dealer;

    player.addCard(deck.draw());
    player.addCard(deck.draw());

    dealer.addCard(deck.draw());
    dealer.addCard(deck.draw());

    std::vector<Hand> hands = {player};

    for (size_t i = 0; i < hands.size(); i++) {

        while (true) {

            std::cout << "\nYour hand: ";
            hands[i].print();
            std::cout << "(Total: " << hands[i].value() << ")\n";

            std::cout << "Dealer shows: "
          << dealer.getCards()[0] << "\n";

            std::cout << "(hit/stand/double/split/hint): ";
            std::string move;
            std::cin >> move;

            if (move == "hint") {
                std::cout << "Strategy: "
                          << strategy.getMove(hands[i],
                              dealer.getCards()[0]) << "\n";
                continue;
            }

            if (move == "split" && hands[i].canSplit()) {
                Hand newHand;
                auto cards = hands[i].getCards();

                hands[i] = Hand();
                hands[i].addCard(cards[0]);
                hands[i].addCard(deck.draw());

                newHand.addCard(cards[1]);
                newHand.addCard(deck.draw());

                hands.push_back(newHand);
                break;
            }

            if (move == "hit") {
                hands[i].addCard(deck.draw());
                if (hands[i].isBust()) break;
            }

            if (move == "double") {
                hands[i].addCard(deck.draw());
                break;
            }

            if (move == "stand")
                break;
        }
    }

    while (dealer.value() < 17)
        dealer.addCard(deck.draw());

    std::cout << "\nDealer hand: ";
    dealer.print();
    std::cout << "(Total: " << dealer.value() << ")\n";

    for (auto& h : hands) {
        std::cout << "Hand result: ";
        h.print();
        std::cout << "(Total: " << h.value() << ")\n";
        if (h.isBust() || dealer.value() > h.value())
            money -= bet;
        else
            money += bet;
    }
}