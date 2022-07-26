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
	std::cout << "黄种女孩的性别是女" << std::endl;
}