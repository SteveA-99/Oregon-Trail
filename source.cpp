/*
This is a game that I made it is similar to Oregon Trail, but this one is based off my DnD game that I first played with my friends.
You could enter a name and choose to either fight the enemy, runaway, or give them money and you can keep hitting each other until 
someone dies and their is a story to the game.
*/





#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "player.h"
#include "event.h"

using namespace std;

int randomRoll()
{
	int number1 = 20;

	int number2 = 1;

	int randomNumber = rand() % number1 + number2;



	return randomNumber;

}

int main()
{

	Player* user = new Player();
	


	// Player* name=new Player("name", strength,  maxhealth, health, money);
	event* EventArray[5] = {
	   new event(
				   "The goblin notices you and starts a fight because your in his cave\nWhat do you do\n1. fight\n2. flee\n:",
				   new Player("Goblin", 10, 15, 30, 50)
				),
	   new event(
				   "you encounter what do you do",
				   new Player("Goons", 10, 20, 70, 25)
				),
	   new event(
				   "you encounter what do you really do",
				   new Player("Gaurds", 20, 25, 100, 40)
				),
	   new event(
		   "you have encountered a zombie",  new Player("zombie", 5,  20, 20, 100)),

	   new event("dragon",
	  
	   new Player("dragon", 25, 50, 100, 10000000)
	   ),

	};










	bool selection = true;

	string name;
	
	string cont = "";

	int choice, action, option;

	do
	{

		cout << "Phandalin" << endl;

		cout << "------------" << endl;

		cout << "Main Menu" << endl;

		cout << "1. Play Game " << endl;

		cout << "2. Test Functionality" << endl;

		cout << "3. Exit Game " << endl;

		cout << "choose an option" << endl;

		cin >> choice;

		switch (choice)
		{

		case 1:

			cout << "In a village far far away called Phandalin" << endl;

			cout << "The village is in near danger and is about to be attacked by an army and lead by a dragon" << endl;

			cout << "You must try and stop the attacks before they destroy the village" << endl;

			cout << "But first let us learn about you" << endl;

			cout << "What is your name? " << endl;

			cin >> name;

			user->setName(name);

			cout << "Hello " << user->getName() << " You will be defending the village" << endl;

			cout << "You are walking to Phandalin and you notice that people are going crazy" << endl;

			cout << "What do you do?" << endl;

			cout << "------------------" << endl;

			cout << "1. ask someone whats happening" << endl;

			cout << "2. keep walking by" << endl;

			cin >> action;

		
			switch (action)
			{
			case 1:
				
				cout << "You ask the next villager runnign passed you" << endl;
				
				cout << "THE DRAGON IS COMING WITH AN ARMY" << endl;
				
				break;
			case 2:
				
				cout << "You keep walking by and you bump in to a villager going crazy" << endl;

				cout << "You then ask him whats going?" << endl;

				cout << "The villager then explains: THERES A DRAGON COMING TO ATTACK PHANDALIN GRAB YOUR STUFF AND RUN!" << endl;

				break;


			}

			cout << "You and your companions decide to go and fight the dragon before he attacks the village" << endl;
			
			cout << "You then go on a long journey to stop the dragon" << endl;
			
			cout << "On your way you find a random cave and decide to walk in it" << endl;
			
			cout << "It is dark and you can not see what do you do?" << endl;
			
			cout << "-----------------------" << endl;
			
			cout << "1. light a torch" << endl;
			
			cout << "2. just go in" << endl;
			
			cin >> action;
			
			switch (action)
			{
			case 1:

				cout << "You light the torch and find a fat goblin in it cooking dinner" << endl;
				
				cout << "The goblin notices you and starts a fight because your in his cave" << endl;

				cout << "What do you do?" << endl;
				
				cout << "1. fight" << endl;
				
				cout << "2. runaway" << endl;
				
				cin >> action;
				
				switch (action)
				{
				case 1:

					cout << EventArray[0]->getplayer()->getHealth();

					while (EventArray[0]->getplayer()->getHealth() > 0 && user->getHealth() > 0)
					{
						cout << "The goblin uses his meaty cock to thrust you " << endl;

						user->takeHealth(EventArray[0]->getplayer()->getStrength() + randomRoll());
						
						cout << "You use Bare fists to shutle his cock thrust" << endl;
						
						EventArray[0]->getplayer()->takeHealth(user->getStrength());
						
						user->displayStats();
						
						cout << endl;
						
						EventArray[0]->getplayer()->displayStats();
						
						cout << "enter character to continue: ";
						
						cin >> cont;



					}

					if (user->getHealth() > 0)
					{
						cout << "you have defeated the goblin. And you loot him for his money  " << endl;
						
						user->addMoney(EventArray[0]->getplayer()->getMoney());
						
						user->displayStats();
						
						cout << endl;

					}
					else
					{
						cout << "game over.";
						
						return 0;
					}

					break;
				case 2:
					
					cout << "You ran away but some gold fell out of your pocket." << endl;
					
					user->takeMoney(5);
					
					break;
				}




				break;
			case 2:
				cout << "You go in and it gets dark, all of a sudden you bump in to something and light a torch" << endl;
				
				cout << "Its a fat goblin and he starts a fight with you" << endl;
				
				cout << "what do you do?" << endl;
				
				cout << "--------------------" << endl;
				
				cout << "1. fight" << endl;
				
				cout << "2. runaway" << endl;

				cin >> action;
				
				switch (action)
				{
				case 1:

					cout << EventArray[0]->getplayer()->getHealth();

					while (EventArray[0]->getplayer()->getHealth() > 0 && user->getHealth() > 0)
					{
						cout << "The goblin uses a pot to try and hit you " << endl;

						user->takeHealth(EventArray[0]->getplayer()->getStrength() + randomRoll());
						
						cout << "You use Bare fists to hit him in the nuts" << endl;
						
						EventArray[0]->getplayer()->takeHealth(user->getStrength());
						
						user->displayStats();
						
						cout << endl;
						
						EventArray[0]->getplayer()->displayStats();
						
						cout << "enter character to continue: ";
						
						cin >> cont;



					}

					if (user->getHealth() > 0)
					{
						cout << "you have defeated the goblin. And you loot him for his money  " << endl;
						
						user->addMoney(EventArray[0]->getplayer()->getMoney());
						
						user->displayStats();
						
						cout << endl;

					}
					else
					{
						cout << "game over.";
						
						return 0;
					}


					break;
				case 2:
					
					cout << "You ran away" << endl;
					
					break;
				}



				break;
			}


			cout << "You head back to Phandalin and you run into some thugs" << endl;
			
			cout << "The thug threatens you to give up your gold" << endl;
			
			cout << "What do you do?" << endl;
			
			cout << "1. Fight" << endl;
			
			cout << "2. give money" << endl;
			
			cin >> action;
			
			switch (action)
			{
			case 1:
				
				cout << EventArray[1]->getplayer()->getHealth();
				
				while (EventArray[1]->getplayer()->getHealth() > 0 && user->getHealth() > 0)
				{
					cout << "The thug than fights you with brass knuckles" << endl;
					
					user->takeHealth(EventArray[1]->getplayer()->getStrength() + randomRoll());
					
					cout << "You use throw a jab and then power jab " << endl;
					
					EventArray[1]->getplayer()->takeHealth(user->getStrength());
					
					user->displayStats();
					
					cout << endl;
					
					EventArray[1]->getplayer()->displayStats();
					
					cout << "enter character to continue: ";
					
					cin >> cont;
				}


				if (user->getHealth() > 0)
				{
					cout << "you have defeated the thug. And you loot him for his money  " << endl;
					
					user->addMoney(EventArray[1]->getplayer()->getMoney());
					
					user->displayStats();
					
					cout << endl;

				}
				else
				{
					cout << "game over.";
					
					return 0;
				}
				break;
			
			case 2:
				
				cout << "you give gold" << endl;
				
				user->takeMoney(50);
				
				user->displayStats();
				
				
			
				
				break;

			}

			cout << "You then go to the townhall and are given maps to go kill the dragon" << endl;
			
			cout << "The maps leads you to a castle and decide to go " << endl;
			
			cout << "You go through the forest and hear something in the bushes" << endl;
			
			cout << "a zombie comes out what do you do?" << endl;
			
			cout << "1. fight back" << endl;
			
			cout << "2. accept your fate and die" << endl;
			
			cin >> action;
			
			switch (action)
			{
			case 1:
			
				cout << EventArray[2]->getplayer()->getHealth();

				while (EventArray[2]->getplayer()->getHealth() > 0 && user->getHealth() > 0)
				{
					cout << "The zombie uses his mouth to bit you " << endl;

					user->takeHealth(EventArray[2]->getplayer()->getStrength() + randomRoll());
					
					cout << "You use Bare fists to upper cut the sh*t outta the zombie" << endl;
					
					EventArray[2]->getplayer()->takeHealth(user->getStrength());
					
					user->displayStats();
					
					cout << endl;
					
					EventArray[2]->getplayer()->displayStats();
					
					cout << "enter character to continue: ";
					
					cin >> cont;

					if (user->getHealth() > 0)
					{
						cout << "you have defeated the zombie. And you loot him for his money  " << endl;
						
						user->addMoney(EventArray[2]->getplayer()->getMoney());
						
						user->displayStats();
						
						cout << endl;


					}
					else
					{
						cout << "game over.";
						
						return 0;
					}


					break;
			case 2:
				cout << "You died" << endl;
				
				return 0;
				}

				cout << "You make it to the castle after the suprise attack" << endl;
				
				cout << "theres a guard at the front" << endl;
				
				cout << "what do you do?" << endl;
				
				cout << "1. fight to get in" << endl;
				
				cout << "2. pay them money" << endl;
				
				cin >> action;
				
				switch (action)
				{
				case 1:
					cout << EventArray[3]->getplayer()->getHealth();

					while (EventArray[3]->getplayer()->getHealth() > 0 && user->getHealth() > 0)
					{
						cout << "The gaurds uses their swords to fight " << endl;

						user->takeHealth(EventArray[3]->getplayer()->getStrength() + randomRoll());
						
						cout << "You dodge the their attack and punch them in the nuts" << endl;
						
						EventArray[3]->getplayer()->takeHealth(user->getStrength());
						
						user->displayStats();
						
						cout << endl;
						
						EventArray[3]->getplayer()->displayStats();
						
						cout << "enter character to continue: ";
						
						cin >> cont;
						if (user->getHealth() > 0)
						{
							cout << "you have defeated the gaurd. And you loot him for his money " << endl;
							
							user->addMoney(EventArray[3]->getplayer()->getMoney());
							
							user->displayStats();
							
							cout << endl;

						}
						else
						{
							cout << "game over.";
							
							return 0;
						}


						break;
				case 2:
					cout << "you give them some of your money" << endl;
					
					user->takeMoney(200);
					
					user->displayStats();
					
					break;

					}

					cout << "You break in to the castle and go up stairs to fight the dragon" << endl;
					
					cout << "You see the dragon sleeping and quietly try to go up behind him" << endl;
					
					cout << "you hear the dragon say 'stop if you want to live'" << endl;
					
					cout << "You turn around and ask the dragon to not attack the town" << endl;

					cout << "The dragon asks for your gold" << endl;
					
					cout << "what do you do" << endl;
					
					cout << "1. fight back" << endl;
					
					cout << "2. give gold" << endl;

					cin >> action;
					
					switch (action)
					{

					case 1:
						cout << EventArray[4]->getplayer()->getHealth();

						while (EventArray[4]->getplayer()->getHealth() > 0 && user->getHealth() > 0)
						{
							cout << "The dragon blasts fire from his mouth " << endl;

							user->takeHealth(EventArray[4]->getplayer()->getStrength() + randomRoll());
							
							cout << "You try to fight him with your fist" << endl;
							
							EventArray[4]->getplayer()->takeHealth(user->getStrength());
							
							user->displayStats();

							cout << endl;
							
							EventArray[4]->getplayer()->displayStats();
							
							cout << "enter character to continue: ";
							
							cin >> cont;

							if (user->getHealth() > 0)
							{
								cout << "you have defeated the dragon and you bring glory back to the village" << endl;
								
								cout << "with these stats left" << endl;

								user->addMoney(EventArray[4]->getplayer()->getMoney());
								
								user->displayStats();
								
								cout << endl;


								return 0;
							}
							else
							{
								cout << "game over.";
								
								return 0;
							}

							break;
					case 2:
						
						cout << "you give gold" << endl;
						
						user->takeMoney(500);
						
						user->displayStats();
						
						cout << "you come back to Phandalin and tell every one the dragons in peace" << endl;
						
						cout << "Gane Over" << endl;

						return 0;
						
						break;







						break; 

					case 5:

						cout << "1. random number generator" << endl;

						cout << "2. test event basic" << endl;

						cout << "3. exit test driver" << endl;

						cin >> action;

						switch (action)
						{
						case 1:

							cout << "How many random number do you want" << endl;
						
							cin >> action;

							for (int i = 0; i < action; i++)
							{
								cout << "Your random number is " << randomRoll() << endl;
							}

							break;
						case 2:

							cout << "Your walking in the afternoon and a thug approaches you and asks for money" << endl;
							
							cout << "what do you do?" << endl;
							
							cout << "1. Fight" << endl;

							cout << "2. Runaway" << endl;
							
							cin >> action;
							
							switch (action)
							{
							case 1:
								
								cout << "What do you use to fight?" << endl;
								
								cout << "1. Fist" << endl;
								
								cout << "2. Gun" << endl;

								cin >> action;
							
								switch (action)
								{
								case 1:
									
									cout << "You punched the guy in the head and he died congrats you didnt get robbed" << endl;
									
									break;
								
								case 2:
								
									cout << "You do not have a gun so you died" << endl;
									
									break;


								}

								break;
							
							case 2:
							
								cout << "You ran away, congrats" << endl;
								
								break;


							}


							break;



						}


						break;

					case 3:

						exit(0);

						selection = false;

						return 0;

						}
					}

					while (choice != 3);

					return 0;
				}



			}



		}


	}

	while (choice != 3);

	return 0;

}






