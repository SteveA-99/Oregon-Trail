


#include "player.h"





Player::Player(std::string pName, int phealth, int pstrength, int pmoney, int pmaxHealth)
{
	name = pName;
	
	strength = pstrength;
	
	maxHealth = pmaxHealth;
	
	health = phealth;
	
	money = pmoney;
}

Player::Player()
{
	health = 100;
	
	strength = 10;

	money = 600;


}


void Player::addStrength(int pStrength)
{
	strength = strength + pStrength;
}

void Player::takeStrength(int rStrength)
{
	strength = strength - rStrength;

}
int Player::getStrength() const
{
	return strength;
}



void Player::setName(std::string pName)
{
	name = pName;

}
std::string Player::getName() const
{
	return name;
}




void Player::addHealth(int pHealth)
{
	health = health + pHealth;
}

void Player::takeHealth(int rHealth)
{
	health = health - rHealth;

}

int Player::getHealth()
{
	return health;
}


int Player::getMoney() const
{
	return money;

}

void Player::addMoney(int pMoney)
{
	money = money + pMoney;
}

void Player::takeMoney(int rMoney)
{
	money = money - rMoney;
}



void Player::displayStats() const
{
	//std::cout << "name: " << name << std::endl;
	
	std::cout << "health: " << health << std::endl;
	
	std::cout << "strength: " << strength << std::endl;

	std::cout << "money: " << money << std::endl;
}

Player::~Player()
{

}











