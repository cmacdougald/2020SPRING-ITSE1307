// crm-chp4-ex4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));

	int intMax = 100;
	int intMin = 10;
	int intRandomNumber = rand() % intMax + intMin;

	int intGuess = 89;

	cerr << "R#: " << intRandomNumber << endl;

	cout << "Please make a guess between " << intMin << " and " << intMax << ": ";
	cin >> intGuess;

	if (intMin <= intGuess && intGuess <= intMax) {

		if (intGuess == intRandomNumber)
		{
			cout << "Congrats you guessed correctly!" << endl;
		}
		else if (intGuess > intRandomNumber) {
			cout << "You guessed to high!" << endl;
		}
		else {
			cout << "You guessed to low!" << endl;
		}

	}
	else {
		cout << "You guessed out of the range of numbers." << endl;
	}
 

    return 0;
}

