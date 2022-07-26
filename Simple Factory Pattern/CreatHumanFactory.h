#pragma once
#include "Human.h"
#include "WhiteHuman.h"
#include "YellowHuman.h"
#include<iostream>
#include <string>
class CreatHumanFactory
{
public:
	CreatHumanFactory();
	virtual ~CreatHumanFactory();
	virtual Human* creatHuman(std::string HumanType);
private:

};

CreatHumanFactory::CreatHumanFactory()
{
}

CreatHumanFactory::~CreatHumanFactory()
{
}

Human* CreatHumanFactory::creatHuman(std::string HumanType)
{
	if (HumanType == "YellowHuman")
	{
		return new YellowHuman();
	}
	else
	{
		return new WhiteHuman();
	}
}
