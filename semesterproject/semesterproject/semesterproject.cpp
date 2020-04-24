// semesterproject.cpp : This file contains the 'main' function. Program execution begins and ends there.
// By: ITSE 1307
// Date: 20200206
// Description: This the main for a text based adventure dungeon crawler

#include "stdafx.h"
//#include "pch.h"
#include <iostream>
#include <string>
#include <time.h>
#include <random>
#include "Room.h"



int determineHighScore(int & intCurrentHighScore, int intPotentialHighScore) {
	if (intPotentialHighScore >= intCurrentHighScore) {
		intCurrentHighScore = intPotentialHighScore;
	}
	return intCurrentHighScore;
}


int calculateHighScore(int intNumberOfItems, int NumberOfCoins) {
	//TODO Come up with formula for making high score
	return 1000;
}

void displaySplashScreen() {
	// Splash Screen
	std::cout << "\nSplash Screen";
	std::cout << "\nGame Title";
}

void displayMainMenu() {
	// Main Menu
	std::cout << "\nMain Menu" << std::endl;
	std::cout << "s) Start Game" << std::endl;

	std::cout << "q) Quit Game" << std::endl;
	std::cout << "What would you like to do: ";
}


int main()
{
	srand((unsigned int)time(NULL));
	// Variables
	int intNumberOfCoins = 0;
	int intNumberOfItems = 0;
	int intStartingNumberOfLives = 3;
	int intNumberOfLives = intStartingNumberOfLives;
	int intHighScore = 5000;
	char chrMenuChoice = ' ';
	char chrDirectionChoice = ' ';
	std::string strAcceptedChoiceInRoom = "wasd0ict";
	bool boolWinCondition = false;

	displaySplashScreen();
	
	do {
		displayMainMenu();

		std::cin >> chrMenuChoice;

		switch (chrMenuChoice) {
			case 's':
				// Setup of game state for new game place Start the game
				intNumberOfCoins = 0;
				intNumberOfItems = 0;
				intNumberOfLives = intStartingNumberOfLives;
				boolWinCondition = false;
				std::cout << "You awake in a room that looks like a mine shaft, no one has been here for awhile." << std::endl;

				// Main game room movement and search loop
				while (boolWinCondition != true && intNumberOfLives > 0) {
					std::cout << "Player Stats: Lives: " << intNumberOfLives << ", Items: " << intNumberOfItems << ", Coins: " << intNumberOfCoins << std::endl;
					std::cout << "You enter a room in the mine shaft ..." << std::endl;

					
					Room objRoom = Room();
					std::cerr << objRoom.toString() << std::endl;

					//Loop for correct user input
					do {
						std::cout << "Which direction do you want to go (w [go North], a [go West], s [go South], d [go East])? " << std::endl;
						std::cout << "What would you like to do (c [Search for Coins], i [Search for items])? ";
						std::cin >> chrDirectionChoice;
					} while (strAcceptedChoiceInRoom.find(chrDirectionChoice) == std::string::npos);


					//Logic for handling user input choice
					switch (chrDirectionChoice) {
					case 'w': //Walk North
						std::cout << "You walk north..." << std::endl;
						objRoom.checkForTrap(intNumberOfLives);
						break;
					case 'a': //Walk West
						std::cout << "You walk west..." << std::endl;
						objRoom.checkForTrap(intNumberOfLives);

						break;
					case 's': //Walk South
						std::cout << "You walk south..." << std::endl;
						objRoom.checkForTrap(intNumberOfLives);

						break;
					case 'd': //Walk East
						std::cout << "You walk east..." << std::endl;
						objRoom.checkForTrap(intNumberOfLives);

						break;
					case 'i': //Search for items
						std::cout << "You search for items in the room...";
						if (objRoom.checkForItem()) {
							intNumberOfItems++;
							std::cout << " you found a rare item.";
							if (intNumberOfItems >= 2) {
								boolWinCondition = true;
							}
						}
						else {
							std::cout << " you end up empty handed.";
						}
						break;
					case 'c': //Search for coins
						std::cout << "You search for coins in the room...";
						if (objRoom.getCoins() > 0) {
							intNumberOfCoins += objRoom.getCoins();
							std::cout << " you found " << objRoom.getCoins() << " coin(s).";
						}
						else {
							std::cout << " you end up empty handed.";
						}
						break;
					case 't': //Search for traps
						std::cout << "You search for traps in the room...";
						if (objRoom.checkForTrap(intNumberOfLives, true)) {
							// Logic moved into class
						}
						else {
							std::cout << " you end up empty handed.";
						}
						break;
					case '0': //Developers exit menu trick.
						intNumberOfLives = 0;
						break;
					} // Switch for player choices in rooom
					std::cout << std::endl;
				} /// Game Loop


				break;
			case 'q':
				//TODO: Calculate High Score
				std::cout << "\nCongratulations, you " << (boolWinCondition ? "won!" : "lost?" );
				std::cout << "\nYour Score: " << calculateHighScore(intNumberOfItems, intNumberOfCoins);
				std::cout << "\nHigh Score: " << determineHighScore(intHighScore, calculateHighScore(intNumberOfItems, intNumberOfCoins));
				break;
		}
	} while (chrMenuChoice != 'q');

	std::cout << std::endl;

	return 0;
}