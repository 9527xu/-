#pragma once
#include"State.h"
class GumballMachine;//避免头文件互相包含
class HasQuarterState:public State
{
private:
	GumballMachine*gumballMachine_;
public:
	HasQuarterState(GumballMachine* gumballMachine);
	// 通过 State 继承
	virtual void insertQuarter() override;
	virtual void ejectQuarter() override;
	virtual void turnCrank() override;
	virtual void dispense() override;
};