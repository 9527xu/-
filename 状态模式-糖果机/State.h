#pragma once
#include<iostream>
using namespace std;
class State
{
public:
	virtual void insertQuarter() = 0;//Ͷ��
	virtual void ejectQuarter() = 0;//�˱�
	virtual void turnCrank() = 0;//Ť���ǹ���
	virtual void dispense() = 0;//����
	void returnQuarter()//�˻�����
	{
		cout << "�˱�..." << endl;
		
	}
};