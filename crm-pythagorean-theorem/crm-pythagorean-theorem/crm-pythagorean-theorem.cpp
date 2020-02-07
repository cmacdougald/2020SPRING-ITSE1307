// crm-pythagorean-theorem.cpp : This file contains the 'main' function. Program execution begins and ends there.
// By: Chris MacDougald
// Date: 20200206
// Description: This is a simple pythagorean theorem example designed to teach basic program flow.

#include "pch.h"
#include <iostream> // C++
#include <stdio.h> // C
#include <math.h>

int main()
{
	//Stage 2: Variables
	float fltValueA = 2.0;
	float fltValueB = 3.0;
	float fltValueC = 0.0;

	//Stage 3: Formulas
	fltValueC = sqrt((fltValueA * fltValueA) + (fltValueB *  fltValueB));
	//fltValueC = sqrt(pow(fltValueA, 2.0) + pow(fltValueB, 2.0));

	//Stage 1: Output
    std::cout << "\nPythagorean Theorem";
	std::cout << "\nA^2 + B^2 = C^2";
	//Stage 2: Variables
	std::cout << "\n" << fltValueA << "^2 + "
		<< fltValueB << "^2 = "
		<< fltValueC << "^2";

	return 0;
}