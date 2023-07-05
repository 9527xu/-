#pragma once
#include<iostream>
#include<bits/stdc++.h>
#include<Windows.h>
class Singleton
{
private:

	Singleton()
	{
		Sleep(1000);//模拟对象创建时的损耗
		printf("Singleton创建\n");
		
	}
	Singleton(const Singleton&)=delete;
	Singleton& operator=(const Singleton&)=delete;
private:
	struct Deletor
	{
		~Deletor()
		{
			if (mSingleton)
			{
				delete mSingleton;
				mSingleton = nullptr;
			}
		}
	};
public:
	static Singleton* instance();
	~Singleton();

public:
	static Singleton* mSingleton;
	static Deletor mDeletor;
};




