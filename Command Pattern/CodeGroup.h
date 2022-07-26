#pragma once
#pragma once
#include<iostream>
#include "Group.h"
class CodeGroup :public Group
{
public:
	CodeGroup();
	~CodeGroup();
	void AddAction();
	void ChangeAction();
	void DeleteAction();
private:

};

CodeGroup::CodeGroup()
{
}

CodeGroup::~CodeGroup()
{
}

void CodeGroup::AddAction()
{
	std::cout << "研发组增加一项功能" << std::endl;
}

void CodeGroup::ChangeAction()
{
	std::cout << "研发组修改一项功能" << std::endl;
}

void CodeGroup::DeleteAction()
{
	std::cout << "研发组删除一项功能" << std::endl;
}