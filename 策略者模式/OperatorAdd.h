#pragma once
#include"AbstrcatStrategy.h"
class OperatorAdd :public AbstractStrategy
{
	// ͨ�� AbstractStrategy �̳�
	virtual int doOperation(int num1, int num2) override;
};