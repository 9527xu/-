#pragma once
#include<iostream>
using namespace std;
class Mario;
class State
{
protected:
	Mario* mario_;
public:
	virtual void wounded()=0;//����
	virtual void revive() = 0;//����
	virtual void getMushroom() = 0;//���Ģ��
	virtual void getSunFlower() = 0;//���̫����
	virtual string getName() = 0;//�������
};