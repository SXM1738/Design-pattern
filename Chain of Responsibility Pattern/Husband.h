#pragma once
#include "Handler.h"
#include <iostream>
class Husband :public Handler
{
public:
	Husband(void);
	~Husband(void);
	void ResponseRequest(Female* pFemale);
private:

};

Husband::Husband(void) :Handler(2)
{
}

Husband::~Husband(void)
{
}

void Husband::ResponseRequest(Female* pFemale)
{
	cout << "�������Ϲ���ʾ:" << pFemale->getRequest() << endl;
	cout << "�Ϲ��ش�:ͬ��" << endl;
}

