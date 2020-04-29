#pragma once
#include <string>
#include <iostream>

class Character
{
public:
	Character();
	~Character();
private:
	int intMana;
	int intHealth;
public:
	void setMana(int intpMana);
	int getMana();
	void setHealth(int intpHealth);
	int getHealth();
	std::string Character::toString();
	void Character::setName(std::string strpName);
	std::string Character::getName();
private:
	std::string strName;
public:
	void inputName();
	void inputMana();
	void inputHealth();
	void input();
};

