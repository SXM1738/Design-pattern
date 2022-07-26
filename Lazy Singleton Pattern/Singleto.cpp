#include "Singleton.h"

Singleton* Singleton::myInstance = nullptr;

Singleton::Singleton()
{
}


Singleton::Singleton(const Singleton&)
{

}

Singleton* Singleton::getInstance()
{
	if (nullptr == myInstance)
	{
		//lock(); 如果有两个线程同时获取单例类的实例，需要加锁
		if (myInstance == nullptr)
		{

			myInstance = new Singleton();
		}
		//unlock();
	}

	return myInstance;
}