#ifndef DEALER_H
#define DEALER_H

#include "Player.h"

class Dealer : public Player {
public:
    bool decideHitOrStand() override;
};

#endif