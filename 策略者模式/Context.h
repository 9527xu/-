#pragma once
#include"AbstrcatStrategy.h"
class Context
{
	AbstractStrategy* abstractStrategy_;
public:
	
	Context(AbstractStrategy* abstractStrategy);
	int executeStrategy(int num1, int num2);
};