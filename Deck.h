/* 
 * File:   Deck.h
 * Author: nicolen
 *
 * Created on April 28, 2013, 8:41 PM
 */

#ifndef DECK_H
#define	DECK_H

class Deck {
public:
    Deck();
    void insertCard(char card);
    char drawCard();
private:
    int cardsInDeck;
    int cardsInScrap;
    char deck[52];
    char scrapDeck[52];
    bool isEmpty();
    void swapDecks();
    void shuffle();
};

#endif	/* DECK_H */

