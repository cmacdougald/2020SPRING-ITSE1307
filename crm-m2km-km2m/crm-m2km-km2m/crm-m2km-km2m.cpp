// Comments and Headers

#include "pch.h"
#include <iostream>
#include <cctype>

const float FLT_M2KM = 1.60934f;
const float FLT_KM2M = 0.621371f;

int main()
{
	float fltInput = 0.0f;
	float fltOutput = 0.0f;
	char chrChoice = ' ';

    std::cout << "miles to kilometers and kilometers to miles";
	std::cout << "\nFrom (m) to km or (k)m to m (k or m): ";
	std::cin >> chrChoice;
	chrChoice = tolower(chrChoice);

	if (chrChoice == 'm') {
		// ================
		std::cout << "\nPlease enter the number of miles traveled: ";
		std::cin >> fltInput;

		fltOutput = fltInput * FLT_M2KM;

		std::cout << "\nYou entered " << fltInput << " miles which is " << fltOutput << " kilometers.";
	}
	else if (chrChoice == 'k') {
		// =================
		std::cout << "\nPlease enter the number of kilometers traveled: ";
		std::cin >> fltInput;

		fltOutput = fltInput * FLT_KM2M;

		std::cout << "\nYou entered " << fltInput << " kilometers which is " << fltOutput << " miles.";
	}
	else {
		std::cout << "\nYou entered an invalid choice.";
	}
	return 0;
}
