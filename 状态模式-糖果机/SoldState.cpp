
#include "SoldState.h"
#include"GumballMachine.h"
#include"SoldOutState.h"

SoldState::SoldState(GumballMachine* gumballMachine)
{
	gumballMachine_=gumballMachine;
}

void SoldState::insertQuarter()
{
	cout << "��Ͷ��,��ȴ��ǹ�" << endl;
	returnQuarter();
}

void SoldState::ejectQuarter()
{
	cout << "�޷��˱ң����ڷ����ǹ�" << endl;
}

void SoldState::turnCrank()
{
	cout << "��ת�����ᣬ��ȴ�" << endl;
}

void SoldState::dispense()
{
	int candyCount = gumballMachine_->getCandyCount();
	if (candyCount > 0)
	{
		cout << "�ַ�һ���ǹ�" << endl;
		--candyCount;
		gumballMachine_->setCandyCount(candyCount);
		if (candyCount > 0)
		{
			gumballMachine_->setState(gumballMachine_->noQuarterState_);
			
		}
		else 
			gumballMachine_->setState(gumballMachine_->soldOutState_);
	}
	else cout << "�ǹ�������" << endl;
	
}
