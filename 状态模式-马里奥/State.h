#pragma once
#include<iostream>
using namespace std;
class Mario;
class State
{
protected:
	Mario* mario_;
public:
	virtual void wounded()=0;//受伤
	virtual void revive() = 0;//复活
	virtual void getMushroom() = 0;//获得蘑菇
	virtual void getSunFlower() = 0;//获得太阳花
	virtual string getName() = 0;//获得名字
};