// chp5-forloop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	for (int intCounter = 0; intCounter < 10; intCounter++) {
		cout << "Counter: " << intCounter << endl;
	}


	for (int intCounter = 10; intCounter > 0; intCounter--) {
		cout << "Counter: " << intCounter << endl;
	}

	for (int intRow = 0; intRow < 10; intRow++) {
		for (int intColumn = 0; intColumn < 10; intColumn++) {
			cout << "(" << intRow << ", " << intColumn << ") ";
		}
		cout << endl;
	}

	//Pyramid Output
	for (int intRow = 0; intRow < 10; intRow++) {
		for (int intColumn = 0; intColumn < intRow; intColumn++) {
			cout << "*";
		}
		cout << endl;
	}

	for (int intRow = 0; intRow < 10; intRow++) {
		for (int intColumn = 0; intColumn < 10; intColumn++) {
			cout << "(" << intRow * intColumn << ") ";
		}
		cout << endl;
	}
	
	for (char charChoice = ' '; charChoice != 'Q';) {
		cout << "Please enter a letter: ";
		cin >> charChoice;
	}

    return 0;
}

