#ifndef DECK_H
#define DECK_H
#include "Card.h"

class Deck {
private:
	Card m_deck[52];
public:
	Deck(); //  constructor creates a deck of 52 cards
	void refreshDeck(); // reset the deck so it looks like a new deck
	Card deal(); // deal a card from the top of the deck
	void shuffle(); // shuffle the cards in the deck
	bool isEmpty(); // true = deckEmpty, false = deckFull
	void display(); // show all the cards in the deck: 13 columns and 4 row

};

#endif
