#pragma once
#include "Command.h"
class AddRequireCommand:public Command
{
public:
	AddRequireCommand();
	~AddRequireCommand();
	void Execute();
private:

};

AddRequireCommand::AddRequireCommand()
{
}

AddRequireCommand::~AddRequireCommand()
{
}

void AddRequireCommand::Execute()
{
	this->Command::m_pRGroup->AddAction();
}
