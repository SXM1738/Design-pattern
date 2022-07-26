#pragma once
#include<iostream>
#include "Group.h"
class RequireGroup:public Group
{
public:
	RequireGroup();
	~RequireGroup();
	void AddAction();
	void ChangeAction();
	void DeleteAction();
private:

};

RequireGroup::RequireGroup()
{
}

RequireGroup::~RequireGroup()
{
}

void RequireGroup::AddAction()
{
	std::cout << "需求组增加一项需求" << std::endl;
}

void RequireGroup::ChangeAction()
{
	std::cout << "需求组修改一项需求" << std::endl;
}

void RequireGroup::DeleteAction()
{
	std::cout << "需求组删除一项需求" << std::endl;
}