#pragma once
#include"AbstrcatStrategy.h"
class OperatorMultiply :public AbstractStrategy
{
public:

	// ͨ�� AbstractStrategy �̳�
	virtual int doOperation(int num1, int num2) override;
};