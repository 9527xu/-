#pragma once
#include"Observe.h"
#include<list>
#include<iostream>
using namespace std;
class Bell
{
protected:
	bool isClassBell_=0;//0:下课,1:上课
	list<Observer*>observers_;
	void notifyAllObservers();
	
public:
	bool getIsClassBell();
	
	void setIsClassBell(bool isClassBell);//状态改变,发起通知
	void attach(Observer* observer);
	
};