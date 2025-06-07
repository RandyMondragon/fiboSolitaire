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

int Card::getValue() {

	if (m_rank == 'A') {
		return 1;
	}

}

