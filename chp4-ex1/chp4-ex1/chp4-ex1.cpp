// chp4-ex1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

int main()
{
	float fltExample = 5.78967;
	double dblExampleTwo = 67.8765432;
	std::cout << "Input and Output Example" << std::endl;
	std::cout << "Example: " << fltExample << std::endl;
	std::cout << "Example Two: " << dblExampleTwo << std::endl;
	std::cout << std::scientific;
	std::cout << "Example: " << fltExample << std::endl;
	std::cout << "Example Two: " << dblExampleTwo << std::endl;
	std::cout << std::fixed;
	std::cout << "Example: " << fltExample << std::endl;
	std::cout << "Example Two: " << dblExampleTwo << std::endl;




    return 0;
}

