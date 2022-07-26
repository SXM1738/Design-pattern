#pragma once
#include "UiGroup.h"
#include "RequireGroup.h"
#include "CodeGroup.h"
class Command
{
public:
	Command();
	virtual ~Command();
	virtual void Execute() = 0;
private:
protected:
	RequireGroup* m_pRGroup;
	UiGroup* m_pUGroup;
	CodeGroup* m_pCGroup;
};

Command::Command()
{
	m_pCGroup = new CodeGroup();
	m_pRGroup = new RequireGroup();
	m_pUGroup = new UiGroup;
}

Command::~Command()
{
	delete m_pCGroup  ;
	delete m_pRGroup  ;
	delete m_pUGroup  ;
}
