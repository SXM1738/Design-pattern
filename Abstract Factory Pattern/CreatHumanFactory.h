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
	virtual Human* creatWhiteHuman() = 0;
	virtual Human* creatYellowHuman() = 0;
private:

};

CreatHumanFactory::CreatHumanFactory()
{
}

CreatHumanFactory::~CreatHumanFactory()
{
}

