// crm-boxofcookies.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int intCookiesInBox = 24;
	int intBoxesinContainer = 75;
	int intNumberOfCookies = 375;

	//TODO: Add user input logic

	int intNumberOfBoxes = intNumberOfCookies / intCookiesInBox;
	int intRemainingUnboxedCookies = intNumberOfCookies % intCookiesInBox;

	//TODO: Figure out number of containers

	cout << "Number of Cookies: " << intNumberOfCookies << endl;
	cout << "Number of Unboxed Cookies: " << intRemainingUnboxedCookies << endl;
	cout << "Number of Boxes of Cookies (" << intCookiesInBox << "): " << intNumberOfBoxes << endl;

	//TODO: Output for containers and other information
}