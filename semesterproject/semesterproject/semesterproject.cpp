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


int main()
{
	srand((unsigned int)time(NULL));
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

					//Logic for what is in a room
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

					//Loop for correct using input
					do {
						std::cout << "Which direction do you want to go (w [go North], a [go West], s [go South], d [go East])? " << std::endl;
						std::cout << "What would you like to do (c [Search for Coins], i [Search for items])? ";
						std::cin >> chrDirectionChoice;
					} while (strAcceptedChoiceInRoom.find(chrDirectionChoice) == std::string::npos);


					//Logic for handling user input choice
					switch (chrDirectionChoice) {
					case 'w': //Walk North
						std::cout << "You walk north..." << std::endl;
						if (boolRoomHasTrap) {
							std::cout << "You triggered a trap and you got hurt." << std::endl;
							intNumberOfLives--;
							boolRoomHasTrap = false;
							std::cout << "You should look for traps next time (t [Search for Traps])!" << std::endl;
						}
						break;
					case 'a': //Walk West
						std::cout << "You walk west..." << std::endl;
						if (boolRoomHasTrap) {
							std::cout << "You triggered a trap and you got hurt." << std::endl;
							intNumberOfLives--;
							boolRoomHasTrap = false;
							std::cout << "You should look for traps next time (t [Search for Traps])!" << std::endl;
						}
						break;
					case 's': //Walk South
						std::cout << "You walk south..." << std::endl;
						if (boolRoomHasTrap) {
							std::cout << "You triggered a trap and you got hurt." << std::endl;
							intNumberOfLives--;
							boolRoomHasTrap = false;
							std::cout << "You should look for traps next time (t [Search for Traps])!" << std::endl;
						}
						break;
					case 'd': //Walk East
						std::cout << "You walk east..." << std::endl;
						if (boolRoomHasTrap) {
							std::cout << "You triggered a trap and you got hurt." << std::endl;
							intNumberOfLives--;
							boolRoomHasTrap = false;
							std::cout << "You should look for traps next time (t [Search for Traps])!" << std::endl;
						}
						break;
					case 'i': //Search for items
						std::cout << "You search for items in the room...";
						if (boolRoomHasItem) {
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
						if (intRoomCoins > 0) {
							intNumberOfCoins += intRoomCoins;
							std::cout << " you found " << intRoomCoins << " coin(s).";
						}
						else {
							std::cout << " you end up empty handed.";
						}
						break;
					case 't': //Search for traps
						std::cout << "You search for traps in the room...";
						if (boolRoomHasTrap) {
							std::cout << " you found a trap.";
							if ((rand() % 10 + 1) >= 6) {
								std::cout << " You triggered the trap and you got hurt." << std::endl;
								intNumberOfLives--;
							}
							else {
								std::cout << " You cleared the trap." << std::endl;
							}
							boolRoomHasTrap = false;
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

				//TODO: Calculate High Score
				std::cout << "\nCongratulations, you " << "won!" << "lost?";
				std::cout << "\nHigh Score: " << intHighScore;
				break;
		}
	} while (chrMenuChoice != 'q');

	std::cout << std::endl;

	return 0;
}
