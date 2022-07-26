// 工厂模式.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include "CreatHumanFactory.h"
#include "CreateBoyHumanFactory.h"
#include "CreateGirlHumanFactory.h"
#include "Human.h"
#include "WhiteHuman.h"
#include "YellowHuman.h"
#include <iostream>

int main()
{
    CreateBoyHumanFactory* pBoyFactory = new CreateBoyHumanFactory();
    Human* pWhiteBoy = pBoyFactory->creatWhiteHuman();
    pWhiteBoy->character();
    pWhiteBoy->Sex();
	Human* pYellowBoy = pBoyFactory->creatYellowHuman();
    pYellowBoy->character();
    pYellowBoy->Sex();
	delete pBoyFactory;
	delete pWhiteBoy;
	delete pYellowBoy;
	std::cout << std::endl;

	CreateGirlHumanFactory* pGirlFactory = new CreateGirlHumanFactory();
	Human* pWhiteGirl = pGirlFactory->creatWhiteHuman();
	pWhiteGirl->character();
	pWhiteGirl->Sex();
	Human* pYellowGirl = pGirlFactory->creatYellowHuman();
	pYellowGirl->character();
	pYellowGirl->Sex();
	delete pGirlFactory;
	delete pWhiteGirl;
	delete pYellowGirl;

    system("pause");
    return 0;
}


