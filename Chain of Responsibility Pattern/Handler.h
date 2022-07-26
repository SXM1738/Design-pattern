#pragma once
#include "Female.h"
class Handler
{
public:
	Handler(int type);
	virtual ~Handler(void);
	void HandleRequest(Female* pFemale);
	void SetNextHandler(Handler* next);
	virtual void ResponseRequest(Female* pFemale) = 0;
private:
	int mType;
	Handler* mpNextHandler;
};

Handler::Handler(int type):mType(type)
{
	mpNextHandler = nullptr;
}

Handler::~Handler(void)
{
}

void Handler::HandleRequest(Female* pFemale)
{
	if (pFemale->getType() == this->mType)
	{
		this->ResponseRequest(pFemale);
	}
	else
	{
		if (this->mpNextHandler != nullptr)
		{
			this->mpNextHandler->HandleRequest(pFemale);
		}
	}
}

void Handler::SetNextHandler(Handler* next)
{
	this->mpNextHandler = next;
}