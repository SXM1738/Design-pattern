#pragma once
#include "WhiteHuman.h"
class WhiteGirlHuman:public WhiteHuman
{
public:
	WhiteGirlHuman();
	~WhiteGirlHuman();
	void Sex();
private:

};

WhiteGirlHuman::WhiteGirlHuman()
{
}

WhiteGirlHuman::~WhiteGirlHuman()
{
}

void WhiteGirlHuman::Sex()
{
	std::cout << "白种女孩的性别是女" << std::endl;
}
