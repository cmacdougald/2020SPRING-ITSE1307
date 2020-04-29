#include "stdafx.h"
#include "Character.h"

Character::Character()
{
	setName("Blank");
	setMana(50);
	setHealth(100);
}

Character::~Character()
{
}


void Character::setMana(int intpMana)
{
	this->intMana = (intpMana > 100 ? 100 : (intpMana < 0 ? 0 : intpMana));
}


int Character::getMana()
{
	return this->intMana;
}


void Character::setHealth(int intpHealth)
{
	this->intHealth = (intpHealth > 200 ? 200 : (intpHealth < 0 ? 0 : intpHealth));
}


int Character::getHealth()
{
	return this->intHealth;
}


std::string Character::toString()
{
	return this->getName() + 
		": M(" + std::to_string(getMana()) + 
		") H(" + std::to_string(getHealth()) + ")";
}


void Character::setName(std::string strpName)
{
	this->strName = strpName;
}


std::string Character::getName()
{
	return this->strName;
}


void Character::inputName()
{
	std::string strTemp = "";
	std::cout << "Please enter a name: ";
	std::cin >> strTemp;
	setName(strTemp);
}


void Character::inputMana()
{
	int intTempMana = 0;
	std::cout << "Please enter " + getName() + "'s mana: ";
	std::cin >> intTempMana;
	setMana(intTempMana);
}


void Character::inputHealth()
{
	int intTempHealth = 0;
	std::cout << "Please enter " + getName() + "'s health: ";
	std::cin >> intTempHealth;
	setHealth(intTempHealth);
}


void Character::input()
{
	inputName();
	inputHealth();
	inputMana();
}
