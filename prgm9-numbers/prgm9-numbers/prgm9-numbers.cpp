// prgm9-numbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int intNumber = 45698;
	int intSeparateNumber = 0;
	int intSum = 0;
	string strOutput = "";
	while (intNumber > 0) {		intSeparateNumber = intNumber % 10;		intSum = intSum + intSeparateNumber;		intNumber = intNumber / 10;		strOutput.insert(0, to_string(intSeparateNumber));		strOutput.insert(0, " ");	};

	cout << strOutput << endl;


    return 0;
}

