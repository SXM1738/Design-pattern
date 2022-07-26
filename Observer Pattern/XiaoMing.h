#pragma once
#include "BeObserved.h"
#include "Observers.h"
#include <vector>
#include <iostream>
using namespace std;
class XiaoMing:public BeObserved
{
public:
	XiaoMing();
	~XiaoMing();
	void AddObserver(Observers* observer);
	void DeleteObserver(Observers* observer);
	void InformObservers(string content);
	void Sleeping();
private:
	vector<Observers*> mVecObservers;

};

XiaoMing::XiaoMing()
{
}

XiaoMing::~XiaoMing()
{
}

void XiaoMing::AddObserver(Observers* observer)
{
	mVecObservers.push_back(observer);
}

void XiaoMing::DeleteObserver(Observers* observer)
{
	vector<Observers*>::const_iterator it = this->mVecObservers.begin();
	for (; it != mVecObservers.end(); ++it)
	{
		string name = (*it)->GetName();
		if (name.compare(observer->GetName()) == 0)
		{
			mVecObservers.erase(it);
			break;
		}
	}
}

void XiaoMing::InformObservers(string content)
{
	vector<Observers*>::const_iterator it = mVecObservers.begin();
	for (; it != mVecObservers.end(); ++it)
	{
		(*it)->Update(content);
	}
}

void XiaoMing::Sleeping()
{
	cout << "《被观察者:小明》小明呼呼大睡...." << endl;
	this->InformObservers("小明上课睡觉");
}