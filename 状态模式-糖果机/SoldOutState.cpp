#include"SoldOutState.h"
#include"GumballMachine.h"
SoldOutState::SoldOutState(GumballMachine* gumballMachine)
{
	gumballMachine_ = gumballMachine;
}

void SoldOutState::insertQuarter()
{
	cout << "�ǹ�������" << endl;
	returnQuarter();
}

void SoldOutState::ejectQuarter()
{
	cout << "û��Ͷ���޷��˻�" << endl;
}

void SoldOutState::turnCrank()
{
	cout << "�ǹ�������" << endl;
}

void SoldOutState::dispense()
{
	cout << "�ǹ�������" << endl;
}
