#include"CareTaker.h"
void CareTaker::addTaker(Taker* taker)
{
	takers_.push_front(taker);
}

Taker* CareTaker::getTaker(int index)
{
	if (index > takers_.size())
		return nullptr;
	return takers_[index];
}
