
#pragma once

#include <iostream>



class Player
{
public:

	Player();
	
	Player(std::string, int, int, int, int);


	void addStrength(int);
	
	void takeStrength(int);
	
	int getStrength() const;


	void setName(std::string);
	
	std::string getName() const;

	void addHealth(int);
	
	void takeHealth(int);
	
	int getHealth();


	int getMoney() const;
	
	void addMoney(int);
	
	void takeMoney(int);


	void displayStats() const;

	~Player();

private:

	std::string name;

	int strength;


	int maxHealth;

	int health;

	int money;
};








