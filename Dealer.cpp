#include "Dealer.h"
#include "Game.h"

bool Dealer::decideHitOrStand() {
    return calculateHandValue() < DEALER_STAND_SCORE;
}
