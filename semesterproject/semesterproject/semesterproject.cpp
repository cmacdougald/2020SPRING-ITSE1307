// semesterproject.cpp : This file contains the 'main' function. Program execution begins and ends there.
// By: ITSE 1307
// Date: 20200206
// Description: This the main for a text based adventure dungeon crawler

#include "pch.h"
#include <iostream>

int main()
{
	// Variables
	int intNumberOfCoins = 0;
	int intHighScore = 1000;
	int intStartingNumberOfLives = 3;
	char chrMenuChoice = ' ';

	// Splash Screen
	std::cout << "\nSplash Screen";
	std::cout << "\nGame Title";

	do {
		// Main Menu
		std::cout << "\nMain Menu" << std::endl;
		std::cout << "s) Start Game" << std::endl;
		std::cout << "q) Quit Game" << std::endl;
		std::cin >> chrMenuChoice;
		switch (chrMenuChoice) {
			case 's':
				std::cout << "Start Game";
				break;
			case 'q':
				char chrAreYouSure = ' ';
				do {
					std::cout << "Are you sure you want to quit?" << std::endl;
					std::cin >> chrAreYouSure;
					if (chrAreYouSure != 'y' && chrAreYouSure != 'Y') {
						chrMenuChoice = ' ';
						break;
					}
				} while (chrMenuChoice != 'q');
				// Win / Loss Screen
				std::cout << "\nCongratulations, you " << "won!" << "lost?";
				std::cout << "\nHigh Score: " << intHighScore;
				break;
		}
	} while (chrMenuChoice != 'q');

	return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
