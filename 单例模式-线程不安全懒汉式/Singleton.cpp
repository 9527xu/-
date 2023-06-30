#include "Singleton.h"
Singleton*Singleton::mSingleton = nullptr;
Singleton::Deletor Singleton::mDeletor;
Singleton* Singleton::instance()
{
	if (mSingleton == nullptr)
	{
	  
		mSingleton = new Singleton();
	}
	return mSingleton;
}

Singleton::~Singleton()
{
	printf("Singleton销毁\n");
}
