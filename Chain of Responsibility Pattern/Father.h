#pragma once
#include "Handler.h"
#include <iostream>
class Father:public Handler
{
public:
	Father(void);
	~Father(void);
	void ResponseRequest(Female* pFemale);
private:

};

Father::Father(void):Handler(1)
{
}

Father::~Father(void)
{
}

void Father::ResponseRequest(Female* pFemale)
{
	cout << "Ů��������ʾ:" << pFemale->getRequest() << endl;
	cout << "���׻ش�:�Ҳ�ͬ��" << endl;
}