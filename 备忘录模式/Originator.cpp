#include"Originator.h"
void Originator::setState(string state)
{
	state_ = state;
	isSaved_ = false;
}


void Originator::saveStateToTaker()
{
	if (isSaved_)
	{
		return;
	}
	isSaved_ = true;
	careTaker_.addTaker(new Taker(state_));
}

string Originator::getState(int index)
{
	return careTaker_.getTaker(index)==nullptr? state_ : careTaker_.getTaker(index)->getState();
}
