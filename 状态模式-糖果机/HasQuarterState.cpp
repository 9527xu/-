#include"HasQuarterState.h"
#include"GumballMachine.h"
#include"NoQuaraterState.h"
HasQuarterState::HasQuarterState(GumballMachine* gumballMachine)
{
	gumballMachine_ = gumballMachine;
}

void HasQuarterState::insertQuarter()
{
	cout << "请不要重复投币" << endl;
	returnQuarter();
}

void HasQuarterState::ejectQuarter()
{
	returnQuarter();
	gumballMachine_->setState(gumballMachine_->noQuarterState_);
}

void HasQuarterState::turnCrank()
{
	cout << "转动中准备发糖" << endl;
	gumballMachine_->setState(gumballMachine_->soldState_);
}

void HasQuarterState::dispense()
{
	cout << "不支持该操作" << endl;
}
