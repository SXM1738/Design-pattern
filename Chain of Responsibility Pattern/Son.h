#pragma once
#include "Handler.h"
#include <iostream>
class Son :public Handler
{
public:
	Son(void);
	~Son(void);
	void ResponseRequest(Female* pFemale);
private:

};

Son::Son(void) :Handler(3)
{
}

Son::~Son(void)
{
}

void Son::ResponseRequest(Female* pFemale)
{
	cout << "母亲向儿子请示:" << pFemale->getRequest() << endl;
	cout << "儿子回答:同意" << endl;
}
