#pragma once
#include "Human.h"
#include <iostream>
class YellowHuman:public Human
{
public:
	YellowHuman();
	~YellowHuman();
	void character();
	void Sex()=0;
private:

};

YellowHuman::YellowHuman()
{
}

YellowHuman::~YellowHuman()
{
}


void YellowHuman::character()
{
	std::cout << "黄种人性格温良" << std::endl;
}