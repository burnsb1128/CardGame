/* 
 * File:   Hand.h
 * Author: nicolen
 *
 * Created on April 28, 2013, 8:27 PM
 */

#ifndef HAND_H
#define	HAND_H

class Hand {
public:
    Hand();
    void displayHand();
    bool isEmpty();
    bool isFull();
    void addCard(char card);
    void dropCard(char card);
    void sumAndProduct(int& sum, int& product);
	
private:
    int cardsInHand;
    char hand[5];
	int aceValue();
};

#endif	/* HAND_H */

