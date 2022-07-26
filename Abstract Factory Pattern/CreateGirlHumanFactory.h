#pragma once
#include "CreatHumanFactory.h"
#include "YellowHuman.h"
#include "WhiteGirlHuman.h"
#include "YellowGirlHuman.h"
class CreateGirlHumanFactory:public CreatHumanFactory
{
public:
	CreateGirlHumanFactory();
	~CreateGirlHumanFactory();
	Human* creatWhiteHuman();
	Human* creatYellowHuman();
private:

};

CreateGirlHumanFactory::CreateGirlHumanFactory()
{
}

CreateGirlHumanFactory::~CreateGirlHumanFactory()
{
}

Human*  CreateGirlHumanFactory::creatWhiteHuman()
{
	return new WhiteGirlHuman();
}

Human* CreateGirlHumanFactory::creatYellowHuman()
{
	return new YellowGirlHuman();
}