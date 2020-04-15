// chp7-example.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void inputName(string & strpName, string strpNameText = "first") {
	do {
		cout << "Please enter your " << strpNameText << " name: ";
		cin >> strpName;
	} while (strpName.length() <= 3);
}

void inputFullName(string & strpFirstName, string & strpMiddleName, string & strpLastName) {
	inputName(strpFirstName);
	inputName(strpMiddleName, "middle");
	inputName(strpLastName, "last");
}

void printName(string strpFirstName, string strpLastName) {
	cout << "Name: " << strpFirstName << " " << strpLastName << endl;
}

void printName(string strpFirstName, string strpLastName, string strMiddleName) {
	cout << "Name: " << strpFirstName << " " << strMiddleName <<  " " << strpLastName << endl;
}

int staticCounter() {
	static int intCounter = 0;
	intCounter++;
	return intCounter;
}

int main()
{
	string strFirstName = "";
	string strLastName = "";
	string strMiddleName = "";

	//inputName(strFirstName);
	//inputName(strLastName, "last");
	//inputName(strMiddleName, "middle");

	inputFullName(strFirstName, strMiddleName, strLastName);

	printName(strFirstName, strLastName, strMiddleName);
	printName(strFirstName, strLastName);
	printName("Sean", "Testing", "");

	staticCounter();
	staticCounter();
	staticCounter();
	staticCounter();
	staticCounter();
	cout << staticCounter() << endl;

    return 0;
}

