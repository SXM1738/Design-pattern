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
	std::cout << "����Ů�����Ա���Ů" << std::endl;
}
