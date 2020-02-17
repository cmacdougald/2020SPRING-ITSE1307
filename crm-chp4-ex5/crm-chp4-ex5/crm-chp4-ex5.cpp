// crm-chp4-ex5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int intGrade = 81;
	char chrPassFail = ' ';
	char chrGradeLetter = ' ';

	chrPassFail = (intGrade >= 70) ? 'P' : 'F';

	chrGradeLetter = (intGrade >= 90) ? 'A' : ((intGrade >= 80) ? 'B' : ((intGrade >= 70) ? 'C' : ((intGrade >= 60) ? 'D' : 'F')));

	cout << "Pass/Fail: " << chrPassFail << endl;
	cout << "Letter Grade: " << chrGradeLetter << endl;

    return 0;
}

