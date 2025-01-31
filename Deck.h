#ifndef DECK_H
#define DECK_H

#include <vector>
using namespace std;

class Deck {
private:
    vector<int> cards;

public:
    Deck();
    void initialize();
    void shuffleCards();
    int drawCard();
};

#endif