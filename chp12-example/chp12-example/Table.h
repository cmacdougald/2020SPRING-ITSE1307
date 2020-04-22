#pragma once
#include <iostream>
#include <string>

class Table
{
public:
	Table();
	~Table();
	int getHeight();
	int setHeight(int intpHeight);
	int getWidth();
	int setWidth(int intpWidth);
	int getNumberOfLegs();
	int setNumberOfLegs(int intpNumberOfLegs);
	int getLength();
	int setLength(int intpLength);
	int getColor();
	int setColor(int intpColor);
	int getVolume();
	int getSurfaceArea();

	std::string toString();
	std::string toJSON();

private:
	int intNumberOfLegs;
	int intWidth;
	int intLength;
	int intHeight;
	int intColor;
};

