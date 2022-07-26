#pragma once
class Group
{
public:
	Group();
	virtual ~Group();
	virtual void AddAction() = 0;
	virtual void ChangeAction() = 0;
	virtual void DeleteAction() = 0;
private:

};

Group::Group()
{
}

Group::~Group()
{
}
