// crm-chp4-ex7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	char chrChoice = ' ';

    cout << "Switch Characters" << endl; 

	cout << "Menu" << endl;
	cout << "p) Play" << endl;
	cout << "l) Load" << endl;
	cout << "s) Save" << endl;
	cout << "q) Quit" << endl;

	cin >> chrChoice;

	switch (chrChoice) {
		case 'p': case 'P':
			cout << "Do you want to play a game?" << endl;
			break;
		case 'l':
			cout << "Loading" << endl;
			break;
		case 's': case 'S':
			cout << "Saving" << endl;
			break;
		case 'q':
			cout << "Quit" << endl;
			break;
		default:
			cout << "Invalid Menu Choice" << endl;
	}
}

