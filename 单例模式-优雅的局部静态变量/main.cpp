#include"Singleton.h"
#include<iostream>
#include<thread>
using namespace std;
#include<bits/stdc++.h>
vector< thread>threads;
void create()
{
	printf("%p\n ",Singleton::instance());
}
int main()
{
	
	{
		for (int i = 0; i < 10; ++i)
		{
			thread(create).detach();

		}
	}
	system("pause");
	printf("\n");
	return 0;
}
