#pragma once
#include "CreatHumanFactory.h"
#include "WhiteHuman.h"
class CreateWhiteHumanFactory :public CreatHumanFactory
{
public:
	CreateWhiteHumanFactory();
	~CreateWhiteHumanFactory();
	Human* creatHuman();
private:

};

CreateWhiteHumanFactory::CreateWhiteHumanFactory()
{
}

CreateWhiteHumanFactory::~CreateWhiteHumanFactory()
{
}

Human* CreateWhiteHumanFactory::creatHuman()
{
	return new WhiteHuman();
}