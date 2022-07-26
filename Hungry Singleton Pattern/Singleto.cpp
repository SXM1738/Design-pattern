#include "Singleton.h"

Singleton* Singleton::myInstance = new Singleton();

Singleton::Singleton()
{
}


Singleton::Singleton(const Singleton&)
{

}

Singleton* Singleton::getInstance()
{
	return myInstance;
}