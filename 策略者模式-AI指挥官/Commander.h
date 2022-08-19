#pragma once
#include"Context.h"
#include"Strategy.h"
class Commander :public Context
{
public:
	Commander(Strategy* strategy=NULL);

	// Í¨¹ý Context ¼Ì³Ð
	virtual void doAction() override;
	virtual void setStrategy(Strategy* strategy) override;
};