#include "BackDoor.h"
#include "Context.h"
#include "GreenPath.h"
#include "Strategy.h"
#include <iostream>


int main(int argc, char* argv[])
{
	Context* p_context;
	p_context = new Context(new BackDoor());
	p_context->UseStrategy();

	p_context = new Context(new GreenPath());
	p_context->UseStrategy();

	system("pause");
	return 0;
}