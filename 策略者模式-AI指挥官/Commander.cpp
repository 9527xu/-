#include"Commander.h"

Commander::Commander(Strategy* strategy)
{
	strategy_ = strategy;
}

void Commander::doAction()
{
	if (strategy_)
	{
		strategy_->getStrategy();
	}
}

void Commander::setStrategy(Strategy* strategy)
{
	strategy_ = strategy;
}
