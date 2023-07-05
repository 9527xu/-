#include"Singleton.h"
#include<iostream>
#include<thread>
using namespace std;
#include<bits/stdc++.h>
vector< thread>threads;
void create()
{
	//打印的地址会不同
	printf("%p\n ",Singleton::instance());
}
int main()
{
	
	{
		for (int i = 0; i < 10; ++i)
		{
			thread(create).detach();

		}
		for (int i = 0; i < 10; ++i)
		{
			thread(create).detach();

		}
	}
	system("pause");
	printf("\n");
	return 0;
}
