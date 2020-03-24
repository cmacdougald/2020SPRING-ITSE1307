// chp5-while.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int intCounter = 0;

	while (intCounter < 20) {
		intCounter++;
		std::cout << intCounter << std::endl;
	}

	char chrChoice = 'q';

	while (chrChoice != 'q') { 
		std::cout << "Please enter your menu choice: ";
		std::cin >> chrChoice;
	}

	do { // Always runs at least once!
		std::cout << "* Please enter your menu choice: ";
		std::cin >> chrChoice;
	} while (chrChoice != 'q');

    return 0;
}

