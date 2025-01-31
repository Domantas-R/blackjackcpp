#include "Player.h"

void Player::addCard(int card) { hand.push_back(card); }

bool Player::decideHitOrStand()
{
    return false;
}

int Player::calculateHandValue() const {
    int value = 0, numAces = 0;
    for (int card : hand) {
        if (card == 1) {
            numAces++;
            value += 11;
        }
        else {
            value += card;
        }
    }
    while (value > 21 && numAces > 0) {
        value -= 10;
        numAces--;
    }
    return value;
}

vector<int> Player::getHand() const { return hand; }
void Player::clearHand() { hand.clear(); }
