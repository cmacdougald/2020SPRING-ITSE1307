// crm-card-switch-example.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <time.h>
#include <random>
#include <string>
using namespace std;


int getRandomCard() {
	return rand() % 52 + 1;
}

int getFaceValue(int intCard) {
	return ((intCard - 1) % 13) + 1;
}

int getSuiteValue(int intCard) {
	return ((intCard - 1) / 13) + 1;
}

int main()
{
	srand((unsigned int)time(NULL));

	int intCard = getRandomCard();
	string strFace = "";
	string strSuite = "";
	cout << "Card: " << intCard << endl;
	// int intFaceValue = ((intCard - 1) % 13) + 1;
	// int intSuiteValue = ((intCard - 1) / 13) + 1;
	cout << "Face: " << getFaceValue(intCard) << endl;
	cout << "Suite: " << getSuiteValue(intCard) << endl;

	switch (getFaceValue(intCard)) {
		case 1:
			strFace = "Ace";
			break;
		case 11:
			strFace = "Jack";
			break;
		case 12:
			strFace = "Queen";
			break;
		case 13:
			strFace = "King";
			break;
		default:
			strFace = to_string(getFaceValue(intCard));
	}

	switch (getSuiteValue(intCard)) {
		case 1:
			strSuite = "Clubs";
			break;
		case 2:
			strSuite = "Diamonds";
			break;
		case 3:
			strSuite = "Hearts";
			break;
		case 4:
			strSuite = "Spades";
			break;
	}
    

	cout << "Card: " << strFace << " of " << strSuite << endl;
	cout << "Face: " << strFace << endl;
	cout << "Suite: " << strSuite << endl;

}
