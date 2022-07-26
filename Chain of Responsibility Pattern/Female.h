#pragma once
#include <string>
using namespace std;
class Female
{
public:
	Female(void);
	virtual ~Female(void);
	virtual int getType() = 0;
	virtual string getRequest() = 0;
private:

};

Female::Female()
{
}

Female::~Female()
{
}
