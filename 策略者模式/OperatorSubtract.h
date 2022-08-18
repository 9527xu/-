#pragma once
#include"AbstrcatStrategy.h"
class OperatorSubtract :public AbstractStrategy
{
public:


	// Í¨¹ý AbstractStrategy ¼Ì³Ð
	virtual int doOperation(int num1, int num2) override;

};