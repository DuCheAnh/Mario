#include "Global_Variable.h"

Global_Variable* Global_Variable::_instance = NULL;

Global_Variable::Global_Variable()
{

	this->Game_time_start = GetTickCount();
}


void Global_Variable::UpdatePmetter(int x)
{
	this->plevel = x;
}

int Global_Variable::getPmetter()
{
	return this->plevel;
}


void Global_Variable::startPtime()
{
	this->Ptime_start = GetTickCount();
}

bool Global_Variable::isPtimeUp()
{
	return ((GetTickCount() - Ptime_start) <= PSWITCH_TIME);
}

DWORD Global_Variable::getPTimeLeft()
{
	return PSWITCH_TIME - (GetTickCount() - Ptime_start);
}

DWORD Global_Variable::getGameTimeLeft()
{
	return GAME_TIME - (GetTickCount() - Game_time_start);
}

void Global_Variable::startGameTime()
{
	this->Game_time_start = GetTickCount();
}

Global_Variable* Global_Variable::GetInstance()
{
	if (_instance == NULL)
		_instance = new Global_Variable();
	return _instance;
}
