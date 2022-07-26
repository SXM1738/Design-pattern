#pragma once
#include "Strategy.h"
#include <iostream>
class BackDoor: public Strategy
{
public:
	BackDoor(void);
	~BackDoor(void);
	void MyStrategy(void);
private:

};
BackDoor::BackDoor(void)
{
}

BackDoor::~BackDoor(void)
{
}
void BackDoor::MyStrategy(void)
{
	std::cout << "×ßºóÃÅ" << std::endl;
}
