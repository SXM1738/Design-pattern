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
	std::cout << "С����Ǹ��еĿ���Ӱ" << std::endl;
}
