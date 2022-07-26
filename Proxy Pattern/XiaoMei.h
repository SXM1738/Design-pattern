#pragma once
#include "Women.h"
#include<iostream>
class XiaoMei :public Women
{
public:
	XiaoMei();
	~XiaoMei();
	void SeeMovieWithMan();
private:

};

XiaoMei::XiaoMei()
{
}

XiaoMei::~XiaoMei()
{
}

void XiaoMei::SeeMovieWithMan()
{
	std::cout << "小美和那个男的看电影" << std::endl;
}

