#pragma once
#include"AbstractState.h"
#include<iostream>
using namespace std;
#include"Context.h"
class EndState :public AbstractState
{
public:
	
	// ͨ�� AbstractState �̳�
	virtual void doAction(Context *context) override;
	virtual string getStateInfo()override;
};