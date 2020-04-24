#include "stdafx.h"
#include "Card.h"


Card::Card()
{
	srand(time(NULL));
	setValue(rand() % 52 + 1);
}

Card::Card(int intpCardValue)
{
	setValue(intpCardValue);
}

// A234567890JQK A234567890JQK A234567890JQK A234567890JQK


Card::~Card()
{
}


int Card::getSuite()
{
	return ((getValue() - 1) / 13) + 1;
}


int Card::getFace()
{
	return ((getValue() - 1) % 13) + 1;
}


std::string Card::getFaceString()
{
	std::string strFace = "";
	switch (getFace()) {
	case 1:
		strFace = "Ace";
		break;
	case 11:
		strFace = "Jack";
		break;
	case 12:
		strFace = "Queen";
		break;
	case 13:
		strFace = "King";
		break;
	default:
		strFace = std::to_string(getFace());
	}
	return strFace;
}


std::string Card::getSuiteString()
{
	std::string strSuite = "";
	switch (getSuite()) {
	case 1:
		strSuite = "Clubs";
		break;
	case 2:
		strSuite = "Diamonds";
		break;
	case 3:
		strSuite = "Hearts";
		break;
	case 4:
		strSuite = "Spades";
		break;
	default:
		std::cerr << "[Error: " << getValue() << ", " << getSuite() << "]";
		strSuite = "ERROR";
	}
	return strSuite;
}


std::string Card::toString()
{
	std::string strCard = "";
	strCard += getFaceString() + " of " + getSuiteString();
	return strCard;
}


void Card::setValue(int intpCardValue)
{
	if (intpCardValue > 52) {
		std::cerr << "card::setvalue: max of 52" << std::endl;
		intpCardValue = 52;
	}
	else if (intpCardValue < 1) {
		std::cerr << "card::setvalue: min of 1" << std::endl;
		intpCardValue = 52;
	}
	intCardValue = intpCardValue;
}


int Card::getValue()
{
	return this->intCardValue;
}
