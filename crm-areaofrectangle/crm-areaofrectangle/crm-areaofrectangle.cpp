// crm-areaofrectangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
// By: Chris MacDougald
// Date: 20200206
// Description: Find the area of a rectangle given 

#include "pch.h"
#include <iostream>

int main()
{
	// Stage 2: Variables
	int intLength = 5;
	int intWidth = 6;
	int intArea = 0;

	// Stage 4: Input
	std::cout << "Please enter the length of the rectangle as a whole number: ";
	std::cin >> intLength;
	std::cout << "Please enter the width of the rectangle as a whole number: ";
	std::cin >> intWidth;

	// Stage 3: Processing
	intArea = intLength * intWidth;

	// Stage 1: Output
    // std::cout << "\nThe area of the rectangle is: 0.000";
	std::cout << "\nThe area of the rectangle is: " << intArea;
}


