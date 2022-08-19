#pragma once
#include"State.h"
class GumballMachine;//����ͷ�ļ��������
class HasQuarterState:public State
{
private:
	GumballMachine*gumballMachine_;
public:
	HasQuarterState(GumballMachine* gumballMachine);
	// ͨ�� State �̳�
	virtual void insertQuarter() override;
	virtual void ejectQuarter() override;
	virtual void turnCrank() override;
	virtual void dispense() override;
};