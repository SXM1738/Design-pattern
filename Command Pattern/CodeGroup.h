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
	std::cout << "�з�������һ���" << std::endl;
}

void CodeGroup::ChangeAction()
{
	std::cout << "�з����޸�һ���" << std::endl;
}

void CodeGroup::DeleteAction()
{
	std::cout << "�з���ɾ��һ���" << std::endl;
}