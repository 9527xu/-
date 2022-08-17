#pragma once
#include<iostream>
using namespace std;
//优点：保存历史
//缺点:消耗资源过多
class Taker
{
private:
	string state_;//某一工作状态下的信息
public:
	Taker(string state);
	string getState();
};