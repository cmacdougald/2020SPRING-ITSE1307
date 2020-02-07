// semesterproject.cpp : This file contains the 'main' function. Program execution begins and ends there.
// By: ITSE 1307
// Date: 20200206
// Description: This the main for a text based adventure dungeon crawler

#include "pch.h"
#include <iostream>

int main()
{
	// Variables
	int intHighScore = 1000;
	int intStartingNumberOfLives = 3;

	// Splash Screen
    std::cout << "\nSplash Screen";
	std::cout << "\nGame Title";

	// Main Menu
	std::cout << "\nMain Menu";

	// Win / Loss Screen
	std::cout << "\nCongratulations, you " << "won!" << "lost?";
	std::cout << "\nHigh Score: " << intHighScore;

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
