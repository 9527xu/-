#include"FireState.h"
#include"Mario.h"
FireState::FireState(Mario *mario)
{
	mario_ = mario;
}

void FireState::wounded()
{
	mario_->setScore(mario_->getScore() - 100);
	mario_->setState(mario_->superState_);
	cout << "受到伤害，变回超级马里奥" << endl;
}

void FireState::revive()
{
	cout << "处于火焰马里奥状态，并未死亡" << endl;
}

void FireState::getMushroom()
{
	mario_->setScore(mario_->getScore()+100);
	cout << "获得蘑菇分数+100" << endl;
}

void FireState::getSunFlower()
{
	mario_->setScore(mario_->getScore() + 200);
	cout << "获得太阳花，分数+200" << endl;
}

string FireState::getName()
{
	return string("火焰马里奥");
}
