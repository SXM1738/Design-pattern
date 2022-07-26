#pragma once
#include "Women.h"
#include<iostream>
class XiaoHong:public Women
{
public:
	XiaoHong();
	~XiaoHong();
	void SeeMovieWithMan();
private:

};

XiaoHong::XiaoHong()
{
}

XiaoHong::~XiaoHong()
{
}

void XiaoHong::SeeMovieWithMan()
{
	std::cout << "小红和那个男的看电影" << std::endl;
}
