#include"Mario.h"

Mario::Mario()
{
	state_ = normalState_;
}

int Mario::getScore()
{
	return score_;
}

void Mario::setScore(int score)
{
	score_ = score;
}

void Mario::setState(State* state)
{
	state_ = state;
}

State* Mario::getState()
{
	return state_;
}

void Mario::wounded()
{
	state_->wounded();
}

void Mario::revive()
{
	state_->revive();
}

void Mario::getMushroom()
{
	state_->getMushroom();
}

void Mario::getSunFlower()
{
	state_->getSunFlower();
}

string Mario::getName()
{
	return state_->getName();
}
