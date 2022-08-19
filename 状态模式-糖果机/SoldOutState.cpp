#include"SoldOutState.h"
#include"GumballMachine.h"
SoldOutState::SoldOutState(GumballMachine* gumballMachine)
{
	gumballMachine_ = gumballMachine;
}

void SoldOutState::insertQuarter()
{
	cout << "糖果已售罄" << endl;
	returnQuarter();
}

void SoldOutState::ejectQuarter()
{
	cout << "没有投币无法退还" << endl;
}

void SoldOutState::turnCrank()
{
	cout << "糖果已售罄" << endl;
}

void SoldOutState::dispense()
{
	cout << "糖果已售罄" << endl;
}
