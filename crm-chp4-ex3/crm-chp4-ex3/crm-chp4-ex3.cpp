// crm-chp4-ex3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

int main()
{
	int intChoice = 0;

	std::cout << "Welcome" << std::endl;
	std::cout << "1.) Hello" << std::endl;
	std::cout << "2.) Bye" << std::endl;
	std::cout << "Please choose between these options: ";

	std::cin >> intChoice;

	if (1 == intChoice) {
		std::cout << "Hello!" << std::endl;
	}
	else if (2 == intChoice) {
		std::cout << "Bye!" << std::endl;
	}
	else {
		std::cout << "Invalid input!" << std::endl;
	}

    return 0;
}

