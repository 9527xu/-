#pragma once
#include"Context.h"
#include"Strategy.h"
class Commander :public Context
{
public:
	Commander(Strategy* strategy=NULL);

	// ͨ�� Context �̳�
	virtual void doAction() override;
	virtual void setStrategy(Strategy* strategy) override;
};