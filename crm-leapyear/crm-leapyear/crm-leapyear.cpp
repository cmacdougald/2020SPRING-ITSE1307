/*

Given the following rules, write a program to read a year (4 digit integer) and tell whether the given year is/was a leap year.

	There were no leap years before 1752.
	If the year divides by 400 then it is a leap year.
	All other years that divide by 100 are not leap years.
	All other years that divide by four are leap years.

For example, 1800, 1900 were not leap years but 2000 will be; 1904, 1908,...,1996 were/will be leap years.

*/

#include "pch.h"
#include <iostream>

int main()
{
	bool isLeapYear = true;
	int intYear = 2000;

	std::cout << "Please enter a year to check if it is an leap year: ";
	std::cin >> intYear;

	if (intYear < 1752) { // There were no leap years before 1752.
		isLeapYear = false;
	}
	else if (intYear % 4 == 0) { //	All other years that divide by four are leap years.
		if (intYear % 400 == 0) { // If the year divides by 400 then it is a leap year.
			isLeapYear = true;
		} else if (intYear % 100 == 0) { // All other years that divide by 100 are not leap years.
			isLeapYear = false;
		}
	}
	else {
		isLeapYear = false;
	}
	   	 
	std::cout << "Is " << intYear << " a leap year? " << (isLeapYear ? "true" : "false");

}


