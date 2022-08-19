#pragma once
#include<iostream>
using namespace std;
class State
{
public:
	virtual void insertQuarter() = 0;//投币
	virtual void ejectQuarter() = 0;//退币
	virtual void turnCrank() = 0;//扭动糖果机
	virtual void dispense() = 0;//发糖
	void returnQuarter()//退还银币
	{
		cout << "退币..." << endl;
		
	}
};