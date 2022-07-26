#pragma once
#include <iostream>
#include <string>
using namespace std;
class Observers
{
public:
	Observers(string n);
	virtual ~Observers(void);
	virtual void Update(string content) = 0;
	virtual string GetName() = 0;
protected:
	string m_name;
};

Observers::Observers(string n)
{
	this->m_name = n;
}

Observers::~Observers()
{
}
