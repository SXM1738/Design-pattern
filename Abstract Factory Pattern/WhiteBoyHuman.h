#pragma once
#include "WhiteHuman.h"
class WhiteBoyHuman:public WhiteHuman
{
public:
	WhiteBoyHuman();
	~WhiteBoyHuman();
	void Sex();
private:

};

WhiteBoyHuman::WhiteBoyHuman()
{
}

WhiteBoyHuman::~WhiteBoyHuman()
{
}

void WhiteBoyHuman::Sex()
{
	std::cout << "�����к����Ա�����" << std::endl;
}