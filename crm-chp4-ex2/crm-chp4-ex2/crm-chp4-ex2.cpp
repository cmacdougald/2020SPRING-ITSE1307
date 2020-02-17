// crm-chp4-ex2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	std::string strName;

	std::cout << "Please enter your full name: ";
	std::getline(std::cin, strName);

	std::cout << "Hello, " << strName << " how are you?" << std::endl;
	std::cout << "Would you like to play a game?" << std::endl;

	return 0;
}

