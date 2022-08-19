#include"NoQuaraterState.h"
#include"HasQuarterState.h"
#include"GumballMachine.h"
NoQuaraterState::NoQuaraterState(GumballMachine* gumballMachine)
{
	gumballMachine_ = gumballMachine;
}

void NoQuaraterState::insertQuarter()
{
	cout << "��Ͷ����һ������" << endl;
	gumballMachine_->setState(gumballMachine_->hasQuarterState_);
}

void NoQuaraterState::ejectQuarter()
{
	cout << "�㻹ûͶ����,�޷��˻�" << endl;
}

void NoQuaraterState::turnCrank()
{
	cout << "����Ͷ����ת��" << endl;
}

void NoQuaraterState::dispense()
{
	cout << "û��Ͷ�ң��޷��ַ��ǹ�" << endl;
}
