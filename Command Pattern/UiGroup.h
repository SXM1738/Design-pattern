#pragma once
#pragma once
#include<iostream>
#include "Group.h"
class UiGroup :public Group
{
public:
	UiGroup();
	~UiGroup();
	void AddAction();
	void ChangeAction();
	void DeleteAction();
private:

};

UiGroup::UiGroup()
{
}

UiGroup::~UiGroup()
{
}

void UiGroup::AddAction()
{
	std::cout << "����������һ��UI" << std::endl;
}

void UiGroup::ChangeAction()
{
	std::cout << "�������޸�һ��UI" << std::endl;
}

void UiGroup::DeleteAction()
{
	std::cout << "������ɾ��һ��UI" << std::endl;
}