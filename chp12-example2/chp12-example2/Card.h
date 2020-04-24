#pragma once
#include <string>
#include <random>
#include <time.h>
#include <iostream>

class Card
{
public:
	Card();
	Card(int intpCardValue);
	~Card();
private:
	int intCardValue;
public:
	int getSuite();
	int getFace();
	std::string getFaceString();
	std::string getSuiteString();
	std::string toString();
	void setValue(int intpCardValue);
	int getValue();
};

