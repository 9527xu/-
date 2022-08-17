#pragma once
#include<iostream>

#include"CareTaker.h"
using namespace std;
class Originator//工作者
{
private:
	string state_;
	bool isSaved_ = false;
	CareTaker careTaker_;
public:
	void setState(string state);
	
	void saveStateToTaker();//保存信息
	string getState(int index=0);//获取保存的信息
};
