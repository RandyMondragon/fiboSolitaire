#include <iostream>
#include "Card.h"

void printMenu() {

	std::cout << "Welcome to Fibonacci Solitaire!\n";

	std::cout << "1) New Deck\n";
	std::cout << "2) Display Deck\n";
	std::cout << "3) Shuffle Deck\n";
	std::cout << "4) Play Solitaire\n";
	std::cout << "5) Exit\n";

}

int main() {


	Card testCard('3', 'C');

	//testCard.display();

	int menuChoice{};

	do
	{
		printMenu();
		std::cin >> menuChoice;

	} while (menuChoice != 5);

	std::cout << "Thank you for playing!\n";

	return 0;
}