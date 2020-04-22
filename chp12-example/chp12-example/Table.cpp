#include "stdafx.h"
#include "Table.h"

Table::Table()
{
	setNumberOfLegs(2);
	setWidth(30);
	setLength(60);
	setHeight(28);
	setColor(0);
}


Table::~Table()
{
	this->intNumberOfLegs = 0;
	this->intWidth = 0;
	this->intLength = 0;
	this->intHeight = 0;
	this->intColor = 0;
}

/*
	Function comments on what the function does
*/
int Table::getHeight() //Accessor/getter function
{
	return this->intHeight;
}

// Normally you always document each function above the definition
int Table::setHeight(int intpHeight) //Mutator/setter function
{
	if (intpHeight > 60) {
		intpHeight = 60;
		std::cerr << "Table::setHeight - Invalid too tall." << std::endl;
	}
	else if (intpHeight <= 0) {
		intpHeight = 28;
		std::cerr << "Table::setHeight - Invalid too small." << std::endl;
	}
	this->intHeight = intpHeight;
	return getHeight(); //Important once a getter is defined always use a getter method
}


int Table::getWidth()
{
	return this->intWidth;
}


int Table::setWidth(int intpWidth)
{
	if (intpWidth > 60) {
		intpWidth = 60;
		std::cerr << "Table::setWidth - Invalid too large." << std::endl;
	}
	else if (intpWidth <= 0) {
		intpWidth = 30;
		std::cerr << "Table::setWidth - Invalid too small." << std::endl;
	}
	this->intWidth = intpWidth;
	return getWidth();
}


int Table::getNumberOfLegs()
{
	return this->intNumberOfLegs;
}


int Table::setNumberOfLegs(int intpNumberOfLegs)
{
	if (intpNumberOfLegs > 8) {
		intpNumberOfLegs = 8;
		std::cerr << "Table::setNumberOfLegs - Invalid too large." << std::endl;
	}
	else if (intpNumberOfLegs <= 0) {
		intpNumberOfLegs = 2;
		std::cerr << "Table::setNumberOfLegs - Invalid too small." << std::endl;
	}
	this->intNumberOfLegs = intpNumberOfLegs;
	return getNumberOfLegs();
}


int Table::getLength()
{
	return this->intLength;
}


int Table::setLength(int intpLength)
{
	if (intpLength > 90) {
		intpLength = 90;
		std::cerr << "Table::setWidth - Invalid too large." << std::endl;
	}
	else if (intpLength <= 0) {
		intpLength = 12;
		std::cerr << "Table::setWidth - Invalid too small." << std::endl;
	}
	this->intLength = intpLength;
	return getWidth();
}


int Table::getColor()
{
	return this->intColor;
}


int Table::setColor(int intpColor)
{
	this->intColor = intpColor;
	return this->getColor();
}


int Table::getVolume()
{
	return (this->getSurfaceArea() * this->getHeight());
}


int Table::getSurfaceArea()
{
	return (this->getLength() * this->getWidth());
}


std::string Table::toString()
{
	std::string strReturnValue = "";
	strReturnValue += "Length: " + std::to_string(this->getLength()) + ", ";
	strReturnValue += "Width: " + std::to_string(this->getWidth()) + ", ";
	strReturnValue += "Height: " + std::to_string(this->getHeight()) + ", ";
	strReturnValue += "Number Of Legs: " + std::to_string(this->getNumberOfLegs()) + ", ";
	strReturnValue += "Color: " + std::to_string(this->getColor()) + ", ";
	strReturnValue += "Area: " + std::to_string(this->getSurfaceArea()) + ", ";
	strReturnValue += "Volume: " + std::to_string(this->getVolume()) + ", ";
	return strReturnValue;
}

std::string Table::toJSON()
{
	return "";
}
