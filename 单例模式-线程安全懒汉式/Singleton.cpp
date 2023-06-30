#include "Singleton.h"
Singleton*Singleton::mSingleton = nullptr;
Singleton::Deletor Singleton::mDeletor;
mutex Singleton::mMtx;
Singleton* Singleton::instance()
{
	if (!mSingleton)
	{
		std::lock_guard<mutex>lck(mMtx);
		if (!mSingleton)
		{
			mSingleton = new Singleton();
		}
	}
	return mSingleton;
}

Singleton::~Singleton()
{
	printf("Singleton销毁\n");
}
