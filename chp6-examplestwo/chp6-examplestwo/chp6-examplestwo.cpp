// chp6-examplestwo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


float lookupPayRate(char chrpScale) {
	float fltPayRate = 0.0;
	switch (chrpScale) {
		case 'f':
			fltPayRate = 20.00;
			break;
		case 'p':
			fltPayRate = 13.00;
			break;
		default:
			fltPayRate = 10.00;
			break;
	}
	return fltPayRate;
}

double calculatePay(float fltpHours, float fltpRate) {
	return (double)fltpHours * (double)fltpRate;
}

double calculatePay(float fltpHours, char chrpScale) {
	return calculatePay(fltpHours, lookupPayRate(chrpScale));
}

int main()
{
	cout << calculatePay(32.0f, 13.00f) << endl;
	cout << calculatePay(32.0, lookupPayRate('p')) << endl;
	cout << calculatePay(32.0, lookupPayRate('f')) << endl;
	cout << calculatePay(32.0, lookupPayRate(' ')) << endl;
	cout << calculatePay(32, ' ') << endl;
	cout << calculatePay(32, 'f') << endl;

    return 0;
}

