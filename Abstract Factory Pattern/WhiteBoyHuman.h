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
	std::cout << "白种男孩的性别是男" << std::endl;
}