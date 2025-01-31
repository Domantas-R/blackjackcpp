#include "HumanPlayer.h"
#include <iostream>
using namespace std;

bool HumanPlayer::decideHitOrStand() {
    char choice;
    cout << "Hit or stand? (h/s): ";
    cin >> choice;
    return choice == 'h';
}
