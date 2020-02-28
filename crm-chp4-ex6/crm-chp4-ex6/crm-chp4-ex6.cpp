// crm-chp4-ex6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int intChoice = 0;
    cout << "Select" << endl;

	cout << "Example Menu" << endl;
	cout << "1 ) Choice 1" << endl;
	cout << "2 ) Choice 2" << endl;
	cout << "3 ) Choice 3" << endl;
	cout << "Please enter a choice between 1 and 3: ";

	cin >> intChoice;

	switch (intChoice) {
		case 1:
			cout << "You choose 1." << endl;
			break;
		case 2:
			cout << "You choose 2." << endl;
			break;
		case 3: case 33:
			cout << "You choose 3." << endl;
			break;
		case 4:
			cout << "You choose 4." << endl;
			cout << "Since there is no break I'm going to the next case." << endl;
		case 5:
			cout << "You choose 5." << endl;
			break;
		default:
			cout << "This option happens when you don't pick the choices I've coded!" << endl;

	}

}

