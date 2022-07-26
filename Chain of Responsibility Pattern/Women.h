#pragma once
#include "Female.h"
class Women:public Female
{
public:
	
	Women(int type,string request);
	~Women(void);
	int getType();
	string getRequest();
private:
	int mType;
	string mRequest;
};

Women::Women(int type, string request)
{
	this->mType = type;
	switch (this->mType)
	{
		case 1:
			this->mRequest.append(request);
			break;
		case 2:
			this->mRequest.append(request);
			break;
		case 3:
			this->mRequest.append(request);
			break;
	default:
		break;
	}
}

Women::~Women(void)
{
}

int Women::getType()
{
	return this->mType;
}

string Women::getRequest()
{
	return mRequest;
}
