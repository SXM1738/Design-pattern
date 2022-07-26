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
	cout << "老婆向老公请示:" << pFemale->getRequest() << endl;
	cout << "老公回答:同意" << endl;
}

