#pragma once
#include"AbstractState.h"
class StartState:public AbstractState
{
public:

	
	// ͨ�� AbstractState �̳�
	virtual void doAction(Context *context) override;
	virtual string getStateInfo() override;
};