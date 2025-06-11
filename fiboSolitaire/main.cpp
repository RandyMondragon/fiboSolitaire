#include <iostream>
#include "Deck.h"

void printMenu() {

	std::cout << "1) New Deck\n";
	std::cout << "2) Display Deck\n";
	std::cout << "3) Shuffle Deck\n";
	std::cout << "4) Play Solitaire\n";
	std::cout << "5) Exit\n";

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

		switch (menuChoice)
		{
		case 1: {
			Deck newDeck{};
			testDeck = newDeck;
			break;
		}
		case 2:
			testDeck.display();
			break;
		case 3:
			testDeck.shuffle();
		default:
			break;
		}

	} while (menuChoice != 5);

	std::cout << "Thank you for playing!\n";

	return 0;
}
