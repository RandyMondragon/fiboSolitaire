#ifndef CARD_H
#define CARD_H

class Card {

private: 
	char rank;
	char suit;

public:
	Card(); // create default card
	Card(char r, char s); // constructor setting rank and suit
	void setCard(char r, char s); // set existing card to new values
	int getValue(); // return point value of card
					// A = 1, 2-10, J,Q,K = 10
	void display(); //display card using 2 fields AS, 10D, QH
};

#endif
