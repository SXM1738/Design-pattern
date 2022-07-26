#pragma once
#include <iostream>

class Singleton
{
public:
	static Singleton* getInstance();
private:
	Singleton();
	Singleton(const Singleton&);
	static Singleton* myInstance;
};
