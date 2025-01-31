#ifndef GAME_H
#define GAME_H

#include "Deck.h"
#include "Dealer.h"
#include "HumanPlayer.h"
#include "Renderer.h"

class Game {
private:
    Deck deck;
    Dealer dealer;
    HumanPlayer player;
    Renderer renderer;

public:
    void playRound();
    void determineWinner();
};

#endif