#include "Deck.h"
#include <algorithm>
#include <random>
#include <chrono>
using namespace std;

Deck::Deck() { initialize(); }

void Deck::initialize() {
    cards.clear();
    for (int i = 1; i <= 10; i++) cards.insert(cards.end(), 4, i);
    for (int i = 0; i < 12; i++) cards.push_back(10);
}

void Deck::shuffleCards() {
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    shuffle(cards.begin(), cards.end(), default_random_engine(seed));
}

int Deck::drawCard() {
    int card = cards.front();
    cards.erase(cards.begin());
    return card;
}
