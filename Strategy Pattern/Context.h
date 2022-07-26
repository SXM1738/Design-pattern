#pragma once
#include "Strategy.h"
class Context
{
public:
	Context(Strategy*  S);
	~Context();
	void UseStrategy(void);
private:
	Strategy* myStrategy;
};
Context::Context(Strategy* S)
{
	this->myStrategy = S;
}

Context::~Context()
{
	delete this->myStrategy;
}

void Context::UseStrategy(void)
{
	this->myStrategy->MyStrategy();
}
