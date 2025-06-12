#include <iostream>
#include "Deck.h"

// global declaration of fibonacci numbers
// total value of card ranks cannot total higher than 233 in fibo sequence
// will use this to see if the total is here or not
const int FIBO_NUMS[12] = { 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233 };

// returns true if f is in FIBO_NUMS
// else false
bool checkFibo(int f) {

	for (int i = 0; i < 12; ++i) {

		if (FIBO_NUMS[i] == f) {
			return true;
		}

	}
	return false;

}

void playSolitaire(Deck& deck) {

	std::cout << "Playing Fibonacci Solitaire !!!\n\n";

	int fibo = 0;
	int piles = 0;

	// nested while loop because we have no clue
	// how large a pile of cards to reach a fibo number
	// may be
	do
	{
		Card tempCard = deck.deal();

		tempCard.display();
		fibo += tempCard.getValue();
		if (checkFibo(fibo)) {
			std::cout << "Fibo: " << fibo << "\n";
			piles++;
			fibo = 0;
		}
		

	} while (!deck.isEmpty());

	// all cards have been played 
	// we check if the current fibo is 0 which is should be if the final pile
	// lead to a fibo total meaning a winning game
	if (fibo == 0) {
		std::cout << "Winner in " << piles << " piles!\n\n";
	}
	else {
		std::cout << "\nLast hand value: " << fibo << "\n" << "Loser in " << piles << " piles!\n\n";
	}

}

void printMenu() {

	std::cout << "1) New Deck\n";
	std::cout << "2) Display Deck\n";
	std::cout << "3) Shuffle Deck\n";
	std::cout << "4) Play Solitaire\n";
	std::cout << "5) Exit\n\n";

}


int main() {

	// seed the random number generator
	srand(time(0));

	int menuChoice{ 0 };

	Deck testDeck{};

	std::cout << "Welcome to Fibonacci Solitaire!\n";

	do
	{
		printMenu();
		std::cin >> menuChoice;
		std::cout << "\n";

		switch (menuChoice)
		{
		case 1: {
			testDeck.refreshDeck();
			break;
		}
		case 2:
			testDeck.display();
			break;
		case 3:
			testDeck.shuffle();
			break;
		case 4:
			playSolitaire(testDeck);
			// refresh the deck after playing
			testDeck.refreshDeck();
			break;
		case 5:
			menuChoice = 5;
			std::cout << "Thank you for playing!\n";
			break;
		default:
			break;
		}

	} while (menuChoice != 5);

	return 0;
}
