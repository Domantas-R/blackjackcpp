#include "Dealer.h"

bool Dealer::decideHitOrStand() {
    return calculateHandValue() < 17;
}
