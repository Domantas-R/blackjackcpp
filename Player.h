#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
using namespace std;

class Player {
protected:
    vector<int> hand;

public:
    virtual ~Player() = default;
    void addCard(int card);
    virtual bool decideHitOrStand();
    int calculateHandValue() const;
    vector<int> getHand() const;
    void clearHand();
};

#endif