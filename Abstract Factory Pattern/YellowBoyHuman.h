#pragma once
#include "YellowHuman.h"
class YellowBoyHuman:public YellowHuman
{
public:
	YellowBoyHuman();
	~YellowBoyHuman();
	void Sex();
private:

};

YellowBoyHuman::YellowBoyHuman()
{
}

YellowBoyHuman::~YellowBoyHuman()
{
}

void YellowBoyHuman::Sex()
{
	std::cout << "�����к����Ա�����" << std::endl;
}