#ifndef GAME_H
#define GAME_H

#include "Deck.h"
#include "Player.h"
#include "Dealer.h"
#include "HumanPlayer.h"
#include "Renderer.h"

class Game {
private:
    Deck deck;
    Player* dealer;
    Player* player;
    Renderer renderer;

public:
    Game();
    ~Game();
    void playRound();
    void determineWinner();
};

#endif