// crm-dollars-n-cents.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	float fltMoney = 185.79f;

	cout << "Please enter a dollar amount with cents: ";
	cin >> fltMoney;
    
	int intDollars = (int)(fltMoney / 1.0f);
	int intCents = (int) ((fltMoney - (float)intDollars) * 100.0f);

	int intRemainingDollars = intDollars;

	int intHundred = (intRemainingDollars / 100);
	// Logic not needed using modulus instead
	//intRemainingDollars = (intRemainingDollars - (intHundred * 100));
	intRemainingDollars = intRemainingDollars % 100;
	cerr << "R$: " << intRemainingDollars << endl;
	int intFifty = (intRemainingDollars / 50);
	intRemainingDollars = intRemainingDollars % 50;
	cerr << "R$: " << intRemainingDollars << endl;
	int intTwenty = (intRemainingDollars / 20);
	intRemainingDollars = intRemainingDollars % 20;
	cerr << "R$: " << intRemainingDollars << endl;

	int intTens = 0;
	int intFives = 0;
	int intOnes = 0;

	int intRemainingCents = intCents;

	int intQuarters = (intRemainingCents / 25);
	intRemainingCents = (intRemainingCents % 25);
	int intDimes = 0;
	int intNickels = 0;
	int intPennies = 0;

	cout << "$: " << intDollars << endl;
	cout << ".: " << intCents << endl;

	cout << "100: " << intHundred << endl;
	cout << "50: " << intFifty << endl;
	cout << "20: " << intTwenty << endl;
	cout << "10: " << intTens << endl;
	cout << "5: " << intFives << endl;
	cout << "1: " << intOnes << endl;
	cout << ".25: " << intQuarters << endl;
	cout << ".10: " << intDimes << endl;
	cout << ".05: " << intNickels << endl;
	cout << ".01: " << intPennies << endl;
}


