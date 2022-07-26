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
		//lock(); ����������߳�ͬʱ��ȡ�������ʵ������Ҫ����
		if (myInstance == nullptr)
		{

			myInstance = new Singleton();
		}
		//unlock();
	}

	return myInstance;
}