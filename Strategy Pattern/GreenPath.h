#pragma once
#include"Strategy.h"
#include <iostream>
class GreenPath:public Strategy
{
public:
	GreenPath(void);
	~GreenPath(void);
	void MyStrategy(void);
private:

};
GreenPath::GreenPath(void)
{
}

GreenPath::~GreenPath(void)
{
}

void GreenPath::MyStrategy(void)
{
	std::cout << "走绿色通道" << std::endl;
}
