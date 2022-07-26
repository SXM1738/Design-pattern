#pragma once
#include "Observers.h"
class Teacher:public Observers
{
public:
	Teacher(void);
	~Teacher(void);
	void Update(string content);
	string GetName();
private:
	void ReportToParents(string content);
};

Teacher::Teacher(void) :Observers("��ʦ")
{
}

Teacher::~Teacher(void)
{
}

void Teacher::Update(string content)
{
	this->ReportToParents(content);
}

void Teacher::ReportToParents(string content)
{
	cout << "���۲���:��ʦ������С���İְ����裬С���Ͽ�˯��" << endl;
}

string Teacher::GetName()
{
	return m_name;
}