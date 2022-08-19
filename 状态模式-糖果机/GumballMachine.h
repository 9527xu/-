#pragma once
#include"State.h"
#include"NoQuaraterState.h"
#include"SoldOutState.h"
#include"HasQuarterState.h"
#include"SoldState.h"
class GumballMachine:public State
{
private:
	State* state_;
	int candyCount_ = 0;
public:
	State * hasQuarterState_ =new HasQuarterState(this);
	State* noQuarterState_ = new NoQuaraterState(this);
	State* soldState_ = new SoldState(this);
	State* soldOutState_ = new SoldOutState(this);
	GumballMachine(int candyCount);
	void setState(State *state);
	State* getState();
	void setCandyCount(int candyCount);
	int getCandyCount();
	// Í¨¹ý State ¼Ì³Ð
	virtual void insertQuarter() override;
	virtual void ejectQuarter() override;
	virtual void turnCrank() override;
	virtual void dispense() override;
};