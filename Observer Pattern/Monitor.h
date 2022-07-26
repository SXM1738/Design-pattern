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

Monitor::Monitor(void):Observers("�೤")
{
}

Monitor::~Monitor(void)
{
}

void Monitor::Update(string content)
{
	//���ݱ��۲��ߵ���Ϊ����ʼ���Լ�����Ϊ
	this->ReportToTeacher(content);
}

void Monitor::ReportToTeacher(string content)
{
	cout << "���۲���:�೤��������ʦ��С���Ͽ�˯��" << endl;
}

string Monitor::GetName()
{
	return this->m_name;
}
