#include "Game.h"
#include <iostream>
using namespace std;

void Game::playRound() {
    deck.initialize();
    deck.shuffleCards();

    dealer.clearHand();
    player.clearHand();

    dealer.addCard(deck.drawCard());
    dealer.addCard(deck.drawCard());

    player.addCard(deck.drawCard());
    player.addCard(deck.drawCard());

    renderer.render(dealer, player, 0);

    while (player.decideHitOrStand()) {
        player.addCard(deck.drawCard());
        if (player.calculateHandValue() > 21) {
            renderer.render(dealer, player, 1);
            return;
        }
        renderer.render(dealer, player, 0);
    }

    while (dealer.decideHitOrStand()) {
        dealer.addCard(deck.drawCard());
    }

    determineWinner();
}

void Game::determineWinner() {
    int playerValue = player.calculateHandValue();
    int dealerValue = dealer.calculateHandValue();

    if (playerValue > 21) {
        renderer.render(dealer, player, 1, false);
    }
    else if (dealerValue > 21) {
        renderer.render(dealer, player, 2, false);
    }
    else if (playerValue > dealerValue) {
        renderer.render(dealer, player, 3, false);
    }
    else if (playerValue < dealerValue) {
        renderer.render(dealer, player, 4, false);
    }
    else {
        renderer.render(dealer, player, 5, false);
    }
}
