#pragma once
#include<iostream>

#include"CareTaker.h"
using namespace std;
class Originator//������
{
private:
	string state_;
	bool isSaved_ = false;
	CareTaker careTaker_;
public:
	void setState(string state);
	
	void saveStateToTaker();//������Ϣ
	string getState(int index=0);//��ȡ�������Ϣ
};
