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

Teacher::Teacher(void) :Observers("老师")
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
	cout << "《观察者:老师》报告小明的爸爸妈妈，小明上课睡觉" << endl;
}

string Teacher::GetName()
{
	return m_name;
}