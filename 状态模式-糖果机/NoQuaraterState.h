#pragma once
#include"State.h"
class GumballMachine;
class NoQuaraterState:public State
{
private:
	GumballMachine* gumballMachine_;
public:
	NoQuaraterState(GumballMachine* gumballMachine);
	// Í¨¹ý State ¼Ì³Ð
	virtual void insertQuarter() override;
	virtual void ejectQuarter() override;
	virtual void turnCrank() override;
	virtual void dispense() override;
};