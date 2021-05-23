


#include <iostream>

#include "player.h"

class event
{
public:
	event();
	
	event(std::string, Player*);

	~event();


	void setplayer(Player*);
	
	Player* getplayer();

	void setmessage(std::string);
	
	std::string getmessage();



private:

	std::string message;

	Player* enemy;
};







