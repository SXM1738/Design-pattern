#pragma once
#include "CreatHumanFactory.h"
#include "WhiteHuman.h"
#include "WhiteBoyHuman.h"
#include "YellowBoyHuman.h"
class CreateBoyHumanFactory :public CreatHumanFactory
{
public:
	CreateBoyHumanFactory();
	~CreateBoyHumanFactory();
	Human* creatWhiteHuman();
	Human* creatYellowHuman();
private:

};

CreateBoyHumanFactory::CreateBoyHumanFactory()
{
}

CreateBoyHumanFactory::~CreateBoyHumanFactory()
{
}

Human* CreateBoyHumanFactory::creatWhiteHuman()
{
	return new WhiteBoyHuman();
}

Human* CreateBoyHumanFactory::creatYellowHuman()
{
	return new YellowBoyHuman();
}