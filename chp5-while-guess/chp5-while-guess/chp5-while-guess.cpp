// chp5-while-guess.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <cstdlib>

int main()
{
	srand(time(0));

	int intMAXNUMBER = 100;
	int intRandomNumber = rand() % intMAXNUMBER + 1;
	int intGuess = 0;

	do {
		std::cerr << "N: " << intRandomNumber << std::endl;

		std::cout << "Please enter a number between 1 and " << intMAXNUMBER << ": ";
		std::cin >> intGuess;

		if (intGuess > intRandomNumber) {
			std::cout << "You guessed too high..." << std::endl;
		}
		else if (intGuess < intRandomNumber) {
			std::cout << "You guessed too low..." << std::endl;

		}
		else {
			std::cout << "Congrats!" << std::endl;
		}
		
	} while (intGuess != intRandomNumber);

    return 0;
}

