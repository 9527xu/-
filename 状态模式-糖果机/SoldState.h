#pragma once
#include"State.h"
class GumballMachine;
class SoldState :public State
{
private:
	GumballMachine* gumballMachine_;
public:
	SoldState(GumballMachine* gumballMachine);
	// ͨ�� State �̳�
	virtual void insertQuarter() override;
	virtual void ejectQuarter() override;
	virtual void turnCrank() override;
	virtual void dispense() override;
};