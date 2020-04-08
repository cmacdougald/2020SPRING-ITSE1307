// chp6-examples.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <string>
#include <iostream>
#include <fstream>
#include <random>
#include <time.h>
using namespace std;


string businessCard(string strpName, string strpPhone, string strpAddress) {
	string strBusinessCard = "";
	strBusinessCard += "Name:" + strpName + "\n";
	strBusinessCard += "Phone:" + strpPhone + "\n";
	strBusinessCard += "Address:" + strpAddress + "\n";
	return strBusinessCard;
}

string businessVCard(string strpName, string strpPhone, string strpAddress) {
	string strBusinessCard = "";
	strBusinessCard += "BEGIN:VCARD\n";
	strBusinessCard += "VERSION:2.1\n";
	strBusinessCard += "N:" + strpName + "\n";
	strBusinessCard += "TEL;WORK;VOICE:" + strpPhone + "\n";
	strBusinessCard += "ADR;WORK;PREF:" + strpAddress + "\n";
	strBusinessCard += "END:VCARD\n";
	return strBusinessCard;
}

void displayAndCreateBusinessCard(string strpName, string strpPhone, string strpAddress) {
	string strFileName = strpName + ".vcf";
	ofstream ofBusinessCard;
	ofBusinessCard.open(strFileName);
	cout << businessCard(strpName, strpPhone, strpAddress) << endl;
	ofBusinessCard << businessVCard(strpName, strpPhone, strpAddress) << endl;
	ofBusinessCard.close();
}

double convertKMtoM(int intpKM) {
	return (double)intpKM * 0.62137;
}

double convertKMtoM(double dblpKM) {
	return dblpKM * 0.62137;
}

int diceRoll(int intpNumberSides) {
	if (intpNumberSides == NULL) {
		intpNumberSides = 6;
	}
	return rand() % intpNumberSides + 1;
}

int diceRoll() {
	return diceRoll(NULL);
}

int d6() {
	return diceRoll(6);
}

int d20() {
	return diceRoll(20);
}

int main()
{
	srand(time(NULL));
	//ofstream ofBusinessCard1;
	//ofstream ofBusinessCard2;
	//ofBusinessCard1.open("Chris.vcf");
	//ofBusinessCard2.open("Sean.vcf");

	//cout << businessCard("Chris", "000-000-0000", "San Antonio, TX") << endl;
	//ofBusinessCard1 << businessVCard("Chris", "000-000-0000", "San Antonio, TX") << endl;
	//cout << businessCard("Sean", "111-111-1111", "Austin, TX") << endl;
	//ofBusinessCard2 << businessVCard("Sean", "111-111-1111", "Austin, TX") << endl;

	displayAndCreateBusinessCard("Chris", "000-000-0000", "San Antonio, TX");
	displayAndCreateBusinessCard("Daniel", "222-222-2222", "Dallas, TX");
	displayAndCreateBusinessCard("Sean", "111-111-1111", "Austin, TX");

	cout << convertKMtoM(2) << endl;
	cout << convertKMtoM(2.1) << endl;

	cout << d20() << endl;
	cout << d6() << endl;
	cout << diceRoll(8) << endl;
	cout << diceRoll(100) << endl;
	cout << diceRoll(NULL) << endl;

	//ofBusinessCard1.close();
	//ofBusinessCard2.close();

	return 0;
}

