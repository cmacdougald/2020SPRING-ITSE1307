// chp12-example2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Card.h"
#include <iostream>

int main()
{
	Card objCard = Card();
	Card objCard2 = Card(13);

	std::cerr << objCard.getValue() << std::endl;
	std::cerr << objCard.getSuite() << std::endl;
	std::cerr << objCard.getFace() << std::endl;
	std::cout << objCard.toString() << std::endl;

	std::cout << objCard2.toString() << std::endl;

	for (int intIndex = 1; intIndex <= 52; intIndex++) {
		Card objCard3 = Card(intIndex);
		std::cout << objCard3.toString() << std::endl;
	}

    return 0;
}

