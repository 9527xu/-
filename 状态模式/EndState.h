#pragma once
#include"AbstractState.h"
#include<iostream>
using namespace std;
#include"Context.h"
class EndState :public AbstractState
{
public:
	
	// Í¨¹ý AbstractState ¼Ì³Ð
	virtual void doAction(Context *context) override;
	virtual string getStateInfo()override;
};