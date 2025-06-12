#include "Deck.h"
#include <iostream>

char getSuitChar(int i) {

	switch (i)
	{
	case 0:
		return 'S';
	case 1:
		return 'H';
	case 2:
		return 'C';
	case 3:
		return 'D';
	default:
		return '?';
	}

}

char getRankChar(int j) {

	switch (j)
	{
	case 0:
		return 'A';
	case 1:
		return '2';
	case 2:
		return '3';
	case 3:
		return '4';
	case 4:
		return '5';
	case 5:
		return '6';
	case 6:
		return '7';
	case 7:
		return '8';
	case 8:
		return '9';
	case 9:
		return 'T';
	case 10:
		return 'J';
	case 11:
		return 'Q';
	case 12:
		return 'K';
	default:
		return '?';
	}

}

// fill array with 52 cards starting with Ace of Spades,
// then Hearts, Clubs, Diamonds
Deck::Deck() {

	int index = 0;

	for (int i = 0; i < 4; ++i) {

		for (int j = 0; j < 13; ++j) {

			m_deck[index].setCard(getRankChar(j), getSuitChar(i));

			++index;

		}

	}

}

void Deck::refreshDeck() {

	*this = {};

}

void Deck::shuffle() {

	for (int i = 0; i < 100; ++i) {

		int rand1 = rand() % 52;
		int rand2 = rand() % 52;

		std::swap(m_deck[rand1], m_deck[rand2]);

	}

	std::cout << "Deck has been shuffled\n";


}


void Deck::display() {

	int index = 0;

	for (int i = 0; i < 4; ++i) {

		for (int j = 0; j < 13; ++j) {

			m_deck[index].display();
			++index;

		}
		std::cout << '\n';

	}

	std::cout << '\n';

}

// ++ is after m_topCard to increment it after the card
// has already been returned for the next call
Card Deck::deal() {

	return(m_deck[m_topCard++]);

}

// if m_topCard is the last card (51) we have reached the end of the deck
bool Deck::isEmpty() {

	if (m_topCard == 51) {

		return true;

	}
	else return false;
}