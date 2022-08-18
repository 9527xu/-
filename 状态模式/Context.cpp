#include"Context.h"

void Context::setState(AbstractState* state)
{
	state_ = state;
}

AbstractState* Context::getState()
{
	return state_;
}
