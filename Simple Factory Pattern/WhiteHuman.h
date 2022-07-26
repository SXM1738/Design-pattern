#pragma once
#include "Human.h"
#include <iostream>
class WhiteHuman:public Human
{
public:
	WhiteHuman();
	~WhiteHuman();
	void Skin();
private:

};

WhiteHuman::WhiteHuman()
{
}

WhiteHuman::~WhiteHuman()
{
}

void WhiteHuman::Skin()
{
	std::cout << "°×ÖÖÈËÓµÓÐ°×Æ¤·ô" << std::endl;
}
