/* 
 * File:   Player.h
 * Author: nicolen
 *
 * Created on April 28, 2013, 8:03 PM
 */

#include "Hand.h"
#include "Deck.h"
#include <iostream>
using namespace std;

#ifndef PLAYER_H
#define	PLAYER_H

class Player {
public:
    Player();
    Player(string name);
    bool takeTurn(Deck* deck, int target);
    void displayHand();
    string getName();
private:
    string name;
    Hand playerHand;
    void pickUpOrDrop(Deck* deck, int target);
    void pickUp(Deck* deck);
    void drop();
    bool completeTurn(int target);
    void invalidSelection();
};

#endif	/* PLAYER_H */


