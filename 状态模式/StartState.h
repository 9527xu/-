#pragma once
#include"AbstractState.h"
class StartState:public AbstractState
{
public:

	
	// Í¨¹ý AbstractState ¼Ì³Ð
	virtual void doAction(Context *context) override;
	virtual string getStateInfo() override;
};