#include"HasQuarterState.h"
#include"GumballMachine.h"
#include"NoQuaraterState.h"
HasQuarterState::HasQuarterState(GumballMachine* gumballMachine)
{
	gumballMachine_ = gumballMachine;
}

void HasQuarterState::insertQuarter()
{
	cout << "�벻Ҫ�ظ�Ͷ��" << endl;
	returnQuarter();
}

void HasQuarterState::ejectQuarter()
{
	returnQuarter();
	gumballMachine_->setState(gumballMachine_->noQuarterState_);
}

void HasQuarterState::turnCrank()
{
	cout << "ת����׼������" << endl;
	gumballMachine_->setState(gumballMachine_->soldState_);
}

void HasQuarterState::dispense()
{
	cout << "��֧�ָò���" << endl;
}
