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
	virtual Human* creatHuman() = 0;
private:

};

CreatHumanFactory::CreatHumanFactory()
{
}

CreatHumanFactory::~CreatHumanFactory()
{
}

