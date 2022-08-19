#include"GumballMachine.h"

int main()
{
	GumballMachine* gumballMachine = new GumballMachine(1);
	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->dispense();

	gumballMachine->insertQuarter();
	return 0;
}