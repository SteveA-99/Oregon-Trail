#include "event.h"


event::event()
{

}

event::event(std::string pmessage, Player* penemy)
{
	message = pmessage;
	
	enemy = penemy;
}

event::~event()
{

}


void event::setplayer(Player* penemy)
{
	enemy = penemy;

}

Player* event::getplayer()
{
	return enemy;
}


void event::setmessage(std::string pmessage)
{
	message = pmessage;
}

std::string event::getmessage()
{
	return message;
}





