#pragma once
#include "YellowHuman.h"
class YellowGirlHuman:public YellowHuman
{
public:
	YellowGirlHuman();
	~YellowGirlHuman();
	void Sex();
private:

};

YellowGirlHuman::YellowGirlHuman()
{
}

YellowGirlHuman::~YellowGirlHuman()
{
}

void YellowGirlHuman::Sex()
{
	std::cout << "����Ů�����Ա���Ů" << std::endl;
}