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
	cout << "ĸ���������ʾ:" << pFemale->getRequest() << endl;
	cout << "���ӻش�:ͬ��" << endl;
}
