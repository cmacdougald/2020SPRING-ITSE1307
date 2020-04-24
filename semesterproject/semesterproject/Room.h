#pragma once

class Room
{
public:
	Room();
	~Room();
private:
	int intNumberOfCoins;
	bool hasTrap;
	bool hasItem;
	void init();
public:
	int getCoins();
	bool checkForTrap(int & intpPlayerLives);
	bool checkForTrap(int & intpPlayerLives, bool doesSearch);
	bool checkForItem();
	std::string toString();
};

