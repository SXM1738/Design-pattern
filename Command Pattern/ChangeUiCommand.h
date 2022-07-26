#pragma once
#pragma once
#include "Command.h"
class ChangeUiCommand :public Command
{
public:
	ChangeUiCommand();
	~ChangeUiCommand();
	void Execute();
private:

};

ChangeUiCommand::ChangeUiCommand()
{
}

ChangeUiCommand::~ChangeUiCommand()
{
}

void ChangeUiCommand::Execute()
{
	this->Command::m_pUGroup->ChangeAction();
}

