#pragma once
#include"Observe.h"
#include<list>
#include<iostream>
using namespace std;
class Bell
{
protected:
	bool isClassBell_=0;//0:�¿�,1:�Ͽ�
	list<Observer*>observers_;
	void notifyAllObservers();
	
public:
	bool getIsClassBell();
	
	void setIsClassBell(bool isClassBell);//״̬�ı�,����֪ͨ
	void attach(Observer* observer);
	
};