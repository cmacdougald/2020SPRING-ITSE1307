// chp10-vector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include "Character.h"


int main()
{
	std::vector<int> intList;
	int intNumberOfCharacter = 2;
	std::vector<Character> objCharacterList;
	Character objCharacter = Character();
	//objCharacter.input();
	std::cout << objCharacter.toString() << std::endl;

	//Vector Looping with Numbers

	for (int intIndex = 0; intIndex < 200; intIndex++) {
		intList.push_back(intIndex + 1);
	}

	for (int intIndex = 0; intIndex < 200; intIndex++) {
		std::cout << intList.at(intIndex) << "\t";
	}

	//Vector Looking with Objects
	std::cout << "How many players: ";
	std::cin >> intNumberOfCharacter;

	for (int intCurrentPlayer = 0; intCurrentPlayer < intNumberOfCharacter; intCurrentPlayer++) {
		Character objTempCharacter = Character();
		objTempCharacter.input();
		objCharacterList.push_back(objTempCharacter);
	}

	objCharacterList.push_back(objCharacter);

	for (int intCurrentPlayer = 0; intCurrentPlayer < objCharacterList.size(); intCurrentPlayer++) {
		std::cout << objCharacterList.at(intCurrentPlayer).toString() << std::endl;
	}

	//objCharacterList.pop_back();
	objCharacterList.clear();


	std::cout << "------------------------------------------------------------------------------------" << std::endl;

	for (int intCurrentPlayer = 0; intCurrentPlayer < objCharacterList.size(); intCurrentPlayer++) {
		std::cout << objCharacterList.at(intCurrentPlayer).toString() << std::endl;
	}

	intList.clear();
	objCharacterList.clear();

    return 0;
}

