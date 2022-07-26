#pragma once
#include "CreatHumanFactory.h"
#include "YellowHuman.h"
class CreateYellowHumanFactory:public CreatHumanFactory
{
public:
	CreateYellowHumanFactory();
	~CreateYellowHumanFactory();
	Human* creatHuman();
private:

};

CreateYellowHumanFactory::CreateYellowHumanFactory()
{
}

CreateYellowHumanFactory::~CreateYellowHumanFactory()
{
}

Human*  CreateYellowHumanFactory::creatHuman()
{
	return new YellowHuman();
}