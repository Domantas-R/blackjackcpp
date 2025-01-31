#include "Renderer.h"
#include <iostream>
using namespace std;

void Renderer::render(Player* dealer, Player* player, int state, bool hideDealerCard) {
    if (system("clear") != 0) {
        if (system("cls") != 0) {
            cerr << "Error: Failed to clear the screen." << endl;
        }
    }

    cout << "Dealer's hand: " << dealer->getHand()[0];
    for (size_t i = 1; i < dealer->getHand().size(); i++) {
        if (hideDealerCard && i == dealer->getHand().size() - 1) {
            cout << " + ?";
        }
        else {
            cout << " + " << dealer->getHand()[i];
        }
    }
    cout << endl;

    cout << "Your hand: " << player->getHand()[0];
    for (size_t i = 1; i < player->getHand().size(); i++) {
        cout << " + " << player->getHand()[i];
    }
    cout << endl;

    switch (state) {
    case 0: cout << "Your total: " << player->calculateHandValue() << endl; break;
    case 1: cout << "Lose! You busted." << endl; break;
    case 2: cout << "Win! Dealer busted." << endl; break;
    case 3: cout << "Win! You are closer to 21." << endl; break;
    case 4: cout << "Lose! Dealer is closer to 21." << endl; break;
    case 5: cout << "Push! It's a tie." << endl; break;
    }
}
