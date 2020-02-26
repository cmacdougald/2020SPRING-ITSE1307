// crm-ifbasedoninput.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int intChoice = 0;

	cout << "Please enter a positive whole number: ";
	cin >> intChoice;

	if (intChoice > 0) {
		cout << "Continue with logic and math here." << endl;
	}
	else {
		cerr << "Invalid user input. Program exiting." << endl;
		return 1;
	}

	return 0;
}

