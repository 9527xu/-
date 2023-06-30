#include "Singleton.h"

Singleton* Singleton::instance()
{
	static Singleton mSingleton;
	return &mSingleton;
}

Singleton::~Singleton()
{
	printf("Singleton销毁\n");
}
