// crm-chp2-ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	// Input - Variables
	int intOutput = 8;
	short shtOutput = 32000;
	char chrOutput = 'c';
	bool boolOutput = true;
	float fltOutput = 8.9f;
	double dblOutput = 9.00;
	int intDivResult = 0;
	int intModResult = 0;

	std::cout << "Please enter a number between 1 and 100: ";
	std::cin >> intOutput;

	// Processing
	intOutput = intOutput-- + 8;
	intOutput++;
	--intOutput;
	shtOutput = shtOutput * 2; // This is bad because the variable used is not large enought for the math used
	chrOutput = chrOutput + 4;
	intModResult = intOutput % 3;
	intDivResult = intOutput / 3;

	// Output
    std::cout << "Varaibles!";
	std::cout << "\n";
	std::cout << "\nInteger: " << intOutput;
	std::cout << "\nMod Result: " << intModResult;
	std::cout << "\nDiv Result: " << intDivResult;
	std::cout << "\nShort: " << shtOutput;
	std::cout << "\nCharacter: " << chrOutput;
	std::cout << "\nBoolean: " << boolOutput;
	std::cout << "\nFloat: " << fltOutput;
	std::cout << "\nDouble: " << dblOutput;

}

