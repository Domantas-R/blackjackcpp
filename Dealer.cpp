#include "Dealer.h"

bool Dealer::shouldDrawCard() const {
    return calculateHandValue() < 17;
}
