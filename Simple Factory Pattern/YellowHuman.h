#pragma once
#include "Human.h"
#include <iostream>
class YellowHuman:public Human
{
public:
	YellowHuman();
	~YellowHuman();
	void Skin();
private:

};

YellowHuman::YellowHuman()
{
}

YellowHuman::~YellowHuman()
{
}

void YellowHuman::Skin()
{
	std::cout << "������ӵ�л�Ƥ��" << std::endl;
}
