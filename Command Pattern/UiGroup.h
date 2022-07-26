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
	std::cout << "美工组增加一项UI" << std::endl;
}

void UiGroup::ChangeAction()
{
	std::cout << "美工组修改一项UI" << std::endl;
}

void UiGroup::DeleteAction()
{
	std::cout << "美工组删除一项UI" << std::endl;
}