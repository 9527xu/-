#include"Example.h"
#include<iostream>
#include"Singleton.h"
using namespace std;
int main()
{
	/**
	 * 局部静态特性的方式实现单实例。
	 * 静态局部变量只在当前函数内有效，其他函数无法访问。
	 * 静态局部变量只在第一次被调用的时候初始化，也存储在静态存储区，生命周期从第一次被初始化起至程序结束止。
	 */
	Example::getInstance().outAddress();
	Example::getInstance().outAddress();

	Singleton::GetInstance()->Print();
	Singleton::GetInstance()->deleteInstance();
	//销毁后不可再创建
	Singleton::GetInstance()->Print();
	Singleton::GetInstance()->Print();
	return 0;
}