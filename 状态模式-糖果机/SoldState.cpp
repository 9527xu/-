
#include "SoldState.h"
#include"GumballMachine.h"
#include"SoldOutState.h"

SoldState::SoldState(GumballMachine* gumballMachine)
{
	gumballMachine_=gumballMachine;
}

void SoldState::insertQuarter()
{
	cout << "已投币,请等待糖果" << endl;
	returnQuarter();
}

void SoldState::ejectQuarter()
{
	cout << "无法退币，正在发放糖果" << endl;
}

void SoldState::turnCrank()
{
	cout << "已转过曲轴，请等待" << endl;
}

void SoldState::dispense()
{
	int candyCount = gumballMachine_->getCandyCount();
	if (candyCount > 0)
	{
		cout << "分发一颗糖果" << endl;
		--candyCount;
		gumballMachine_->setCandyCount(candyCount);
		if (candyCount > 0)
		{
			gumballMachine_->setState(gumballMachine_->noQuarterState_);
			
		}
		else 
			gumballMachine_->setState(gumballMachine_->soldOutState_);
	}
	else cout << "糖果已售罄" << endl;
	
}
