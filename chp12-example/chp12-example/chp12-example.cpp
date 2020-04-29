// chp12-example.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include "Table.h"
using namespace std;

int main()
{
	string strExample = "Hello";
	Table objTableOne;
	Table objTableTwo;
	Table objTableThree = Table(90, 60, 34);
	
	cout << "Enter your string: ";
	cin >> strExample;
	cout << strExample.at(0) << endl;

	//Bad - Direct Access to Variables
	//objTableOne.intHeight = 10000;

	//cout << objTableOne.intHeight << endl;

	cout << objTableOne.setHeight(10000) << endl;
	cout << objTableOne.getHeight() << endl;

	cout << objTableOne.toString() << endl;

	objTableTwo.setHeight(12);
	objTableTwo.setWidth(12);
	objTableTwo.setLength(12);

	cout << objTableTwo.toString() << endl;
	cout << objTableTwo.toJSON() << endl;

	cout << objTableThree.toString() << endl;



    return 0;
}

