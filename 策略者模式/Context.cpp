#include"Context.h"

Context::Context(AbstractStrategy* abstractStrategy)
{
	abstractStrategy_ = abstractStrategy;
}

int Context::executeStrategy(int num1, int num2)
{
	return abstractStrategy_->doOperation(num1,num2);
}
