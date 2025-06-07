#include "Card.h"


// creates a default card which will be Ace of Spades
Card::Card() {
	m_rank = { 'A' };
}

// constructor setting rank r and suit s
Card::Card(char r, char s) {

	m_rank = r;
	m_suit = s;

}

// set existing card to new values
void Card::setCard(char r, char s) {

	m_rank = r;
	m_suit = s;

}

// return the card value based on the m_rank A = 1, 2-10, J,Q,K = 10
int Card::getValue() {

	switch (m_rank)
	{
	case ('A'):
		return 1;
	case ('2'):
		return 2;
	case ('3'):
		return 3;
	case ('4'):
		return 4;
	case ('5'):
		return 5;
	case ('6'):
		return 6;
	case ('7'):
		return 7;
	case ('8'):
		return 8;
	case ('9'):
		return 9;
	case ('T'):
		return 10;
	case ('J'):
		return 10;
	case ('Q'):
		return 10;
	case ('K'):
		return 10;
	default:
		return 0;
	}

}

