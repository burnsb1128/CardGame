#include "Player.h"

using namespace std;
string playername;
char card;

Player::Player(){
	playername = " ";
}
Player::Player(string name){
	playername = name;
}
string Player::getName(){
	return playername;
}
bool Player::takeTurn(Deck* deck, int target){
	Hand::displayHand;

	if (Hand::isEmpty){
		pickUp;
	}
	else if(Hand::isFull){
		drop;
	}
	else
		pickUpOrDrop(deck, target);

	Hand::sumAndProduct;
	completeTurn;
}
void Player::displayHand(){
	Hand::displayHand;
}
void Player::pickUp(Deck* deck){
	card = Deck::drawCard;

}
