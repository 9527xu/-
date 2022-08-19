#include"GumballMachine.h"

GumballMachine::GumballMachine(int candyCount)
{
	candyCount_ = candyCount;
	if (candyCount_ > 0)
	{
		state_ = noQuarterState_;
		
	}
	else
	{
		state_ = soldOutState_;
	}
	
}

void GumballMachine::setState(State* state)
{
	state_ = state;
}

State* GumballMachine::getState()
{
	return state_;
}

void GumballMachine::setCandyCount(int candyCount)
{
	candyCount_ = candyCount;
}

int GumballMachine::getCandyCount()
{
	return candyCount_;
}

void GumballMachine::insertQuarter()
{
	state_->insertQuarter();
}

void GumballMachine::ejectQuarter()
{
	state_->ejectQuarter();
}

void GumballMachine::turnCrank()
{
	state_->turnCrank();
}

void GumballMachine::dispense()
{
	state_->dispense();
}
