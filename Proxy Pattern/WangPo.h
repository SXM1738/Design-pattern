#pragma once
#include "Women.h"
class WangPo:public Women
{
public:
	WangPo(Women *women);
	~WangPo();
	void SeeMovieWithMan();
private:
	Women* m_Women;
};

WangPo::WangPo(Women* women)
{
	this->m_Women = women;
}

WangPo::~WangPo()
{
	delete this->m_Women;
}

void WangPo::SeeMovieWithMan()
{
	this->m_Women->SeeMovieWithMan();
}