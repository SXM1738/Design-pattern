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
	std::cout << "����������һ������" << std::endl;
}

void RequireGroup::ChangeAction()
{
	std::cout << "�������޸�һ������" << std::endl;
}

void RequireGroup::DeleteAction()
{
	std::cout << "������ɾ��һ������" << std::endl;
}