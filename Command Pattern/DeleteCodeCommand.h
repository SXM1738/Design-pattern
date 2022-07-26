
#pragma once
#include "Command.h"
class DeleteCodeCommand :public Command
{
public:
	DeleteCodeCommand();
	~DeleteCodeCommand();
	void Execute();
private:

};

DeleteCodeCommand::DeleteCodeCommand()
{
}

DeleteCodeCommand::~DeleteCodeCommand()
{
}

void DeleteCodeCommand::Execute()
{
	this->Command::m_pCGroup->DeleteAction();
}
