#pragma once
#include "Observers.h"
class Monitor:public Observers
{
public:
	Monitor(void);
	~Monitor(void);
	void Update(string content);
	string GetName();
private:
	void ReportToTeacher(string content);
};

Monitor::Monitor(void):Observers("班长")
{
}

Monitor::~Monitor(void)
{
}

void Monitor::Update(string content)
{
	//根据被观察者的行为，开始了自己的行为
	this->ReportToTeacher(content);
}

void Monitor::ReportToTeacher(string content)
{
	cout << "《观察者:班长》报告老师，小明上课睡觉" << endl;
}

string Monitor::GetName()
{
	return this->m_name;
}
