#include "Context.h"
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