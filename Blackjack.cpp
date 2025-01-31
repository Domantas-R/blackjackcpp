#include "Game.h"
#include <iostream>

using namespace std;

int main() {
    Game game;
    char choice = 'y';
    while (choice == 'y') {
        game.playRound();
        cout << "Play again? (y/n): ";
        cin >> choice;
    }
    return 0;
}