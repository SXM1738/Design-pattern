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
	std::cout << "�������Ը�����" << std::endl;
}