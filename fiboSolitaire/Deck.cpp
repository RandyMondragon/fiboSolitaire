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

	int index = 0;

	for (int i = 0; i < 4; ++i) {

		for (int j = 0; j < 13; ++j) {

			m_deck[index].setCard(getRankChar(j), getSuitChar(i));

			++index;

		}

	}

}

void Deck::shuffle() {

	m_deck[12] = Card{ '2', 'C' };
	m_deck[16] = Card{ '5', 'S' };
	m_deck[22] = Card{ '5', 'H' };
	m_deck[42] = Card{ 'T', 'A' };


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