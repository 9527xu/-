#pragma once
#include"Strategy.h"
class Context//ָ�ӹٽӿ�
{
protected:
	Strategy* strategy_;
public:
	
	virtual void doAction() = 0;
	virtual void setStrategy(Strategy* strategy) = 0;
};