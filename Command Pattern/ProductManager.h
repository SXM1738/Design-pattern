#pragma once
#include "Command.h"
class ProductManager
{
public:
	ProductManager();
	~ProductManager();
	void ReceiveCommand(Command* command);
	void RelayCommand();
private:
	Command* m_pCommand;
};

ProductManager::ProductManager()
{
}

ProductManager::~ProductManager()
{
}

void ProductManager::ReceiveCommand(Command* command)
{
	this->m_pCommand = command;
}

void ProductManager::RelayCommand()
{
	m_pCommand->Execute();
}
