#pragma once
#include "Human.h"
#include <iostream>
class WhiteHuman:public Human
{
public:
	WhiteHuman();
	virtual ~WhiteHuman();
	void character();
	virtual void Sex()=0;
private:

};

WhiteHuman::WhiteHuman()
{
}

WhiteHuman::~WhiteHuman()
{
}

void WhiteHuman::character()
{
	std::cout << "白种人性格贪婪" << std::endl;
}
