#pragma once
#include "Observers.h"
class BeObserved
{
public:
	BeObserved();
	virtual ~BeObserved();
	virtual void AddObserver(Observers* observer) = 0;
	virtual void DeleteObserver(Observers* observer) = 0;
	virtual void InformObservers(std::string content)= 0;
private:

};

BeObserved::BeObserved()
{
}

BeObserved::~BeObserved()
{
}