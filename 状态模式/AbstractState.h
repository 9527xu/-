#pragma once
#include<iostream>

using namespace std;
#include"Context.h"
class AbstractState
{
public:
	virtual void doAction(Context *context)=0;
	virtual string getStateInfo()=0;
};