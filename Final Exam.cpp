#include <iostream>
#include <math.h>
#include <string>
#include "Deck.h"
#include "Hand.h"
#include <time.h>
using namespace std;


#include "Player.h"
#include <stdlib.h>
using namespace std;

/*
 * 
 */
int main() {

    // collect player information
    Player players[2];
    string name;
    cout << "Player 1 enter your name: ";
    cin >> name;
    players[0] = Player(name);
    cout << "Player 2 enter your name: ";
    cin >> name;
    players[1] = Player(name);
    
    // create the card deck
    Deck deck;
    
    // determine the target value for this round
    //int target = rand() % 41 + 10;
    int target = 10;
    
    int currPlayer = 0;
    bool won = false, lastChance = false;
    while(won == lastChance) {
        won = players[currPlayer].takeTurn(&deck, target);
        if(won && lastChance) {
            cout << "The game has resulted in a tie.";
            cout << players[0].getName() << "'s hand:" << endl;
            players[0].displayHand();
            cout << players[1].getName() << "'s hand:" << endl;
            players[1].displayHand();
            won = false;
        } else if (won) {
            lastChance = true;
        } else if (lastChance) {
            int winningPlayer = currPlayer == 0 ? 1 : 0;
            cout << players[winningPlayer].getName() << " wins!!";
            cout << players[0].getName() << "'s hand:" << endl;
            players[0].displayHand();
            cout << players[1].getName() << "'s hand:" << endl;
            players[1].displayHand();
        }
        currPlayer = currPlayer == 0 ? 1 : 0;
    }
    return 0;
}