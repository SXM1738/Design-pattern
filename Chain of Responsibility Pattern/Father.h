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
	cout << "女儿向父亲请示:" << pFemale->getRequest() << endl;
	cout << "父亲回答:我不同意" << endl;
}