#include "Singleton.h"
#include<mutex>
Singleton*Singleton::mSingleton = nullptr;
Singleton::Deletor Singleton::mDeletor;
Singleton* Singleton::instance()
{
	static std::once_flag flag;
	std::call_once(flag, []
		{
			mSingleton = new Singleton();
		});
	return mSingleton;
}

Singleton::~Singleton()
{
	printf("Singleton销毁\n");
}
