#include"NoQuaraterState.h"
#include"HasQuarterState.h"
#include"GumballMachine.h"
NoQuaraterState::NoQuaraterState(GumballMachine* gumballMachine)
{
	gumballMachine_ = gumballMachine;
}

void NoQuaraterState::insertQuarter()
{
	cout << "你投入了一个银币" << endl;
	gumballMachine_->setState(gumballMachine_->hasQuarterState_);
}

void NoQuaraterState::ejectQuarter()
{
	cout << "你还没投过币,无法退还" << endl;
}

void NoQuaraterState::turnCrank()
{
	cout << "请先投币再转动" << endl;
}

void NoQuaraterState::dispense()
{
	cout << "没有投币，无法分发糖果" << endl;
}
