// semesterproject.cpp : This file contains the 'main' function. Program execution begins and ends there.
// By: ITSE 1307
// Date: 20200206
// Description: This the main for a text based adventure dungeon crawler

#include "pch.h"
#include <iostream>
#include <string>
#include <time.h>
#include <random>


int main()
{
	srand(time(NULL));
	// Variables
	int intNumberOfCoins = 0;
	int intNumberOfItems = 0;
	int intStartingNumberOfLives = 3;
	int intNumberOfLives = intStartingNumberOfLives;
	int intHighScore = 1000;
	char chrMenuChoice = ' ';
	char chrDirectionChoice = ' ';
	std::string strAcceptedChoiceInRoom = "wasd0ict";
	bool boolWinCondition = false;
	int intRoomCoins = 0;
	bool boolRoomHasItem = 0;
	bool boolRoomHasTrap = 0;


	// Splash Screen
	std::cout << "\nSplash Screen";
	std::cout << "\nGame Title";

	do {
		// Main Menu
		std::cout << "\nMain Menu" << std::endl;
		std::cout << "s) Start Game" << std::endl;
		
		std::cout << "q) Quit Game" << std::endl;
		std::cout << "What would you like to do: ";

		std::cin >> chrMenuChoice;

		switch (chrMenuChoice) {
			case 's':
				std::cout << "You awake in a room that looks like a mine shaft, no one has been here for awhile." << std::endl;
				while (boolWinCondition != true) {
					std::cout << "Player Stats: Lives: " << intNumberOfLives << ", Items: " << intNumberOfItems << ", Coins: " << intNumberOfCoins << std::endl;
					std::cout << "You enter a room in the mine shaft ..." << std::endl;
					intRoomCoins = 0;
					boolRoomHasItem = false;
					boolRoomHasTrap = false;
					switch (rand() % 10 + 1)
					{
						case 1: case 3: case 5:
							intRoomCoins = 1;
							break;
						case 2: case 4:
							intRoomCoins = 2;
							break;
						case 6: case 7:
							boolRoomHasTrap = true;
							break;
						case 8:
							boolRoomHasItem = true;
							break;
						default:
							break;
					}
					std::cerr << "DEBUG: Coin? " << intRoomCoins << ", Trap? " << boolRoomHasTrap << ", Item? " << boolRoomHasItem << std::endl;
					do {
						std::cout << "Which direction do you want to go (w [go North], a [go West], s [go South], d [go East])?";
						std::cin >> chrDirectionChoice;
					} while (strAcceptedChoiceInRoom.find(chrDirectionChoice) == std::string::npos);
					switch (chrDirectionChoice) {
					case 'w':
						std::cout << "You walk north..." << std::endl;
						break;
					case 'a':
						std::cout << "You walk west..." << std::endl;
						break;
					case 's':
						std::cout << "You walk south..." << std::endl;
						break;
					case 'd':
						std::cout << "You walk east..." << std::endl;
						break;
					case 'i':
						std::cout << "You search for items in the room..." << std::endl;
						break;
					case 'c':
						std::cout << "You search for coins in the room...";
						if (intRoomCoins > 0) {
							std::cout << " you found " << intRoomCoins << " coin(s).";
						}
						else {
							std::cout << " you end up empty handed.";
						}
						std::cout << std::endl;
						intNumberOfCoins += intRoomCoins;
						break;
					case 't':
						std::cout << "You search for traps in the room..." << std::endl;
						break;
					case '0':
						boolWinCondition = true;
						break;
					} // Switch for player choices in rooom
				} /// Game Loop


				break;
			case 'q':
				/*
				char chrAreYouSure = ' ';
				do {
					std::cout << "Are you sure you want to quit?";
					std::cin >> chrAreYouSure;
					if (chrAreYouSure != 'y' && chrAreYouSure != 'Y') {
						chrMenuChoice = ' ';
						break;
					}
				} while (chrMenuChoice != 'q');
				//*/

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
