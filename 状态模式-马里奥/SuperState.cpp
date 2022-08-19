#include"SuperState.h"
#include"Mario.h"
SuperState::SuperState(Mario *mario)
{
	mario_ = mario;
}

void SuperState::wounded()
{
	mario_->setState(mario_->normalState_);
	mario_->setScore(mario_->getScore() - 100);
	cout << "受到伤害，分数-100" << endl;
}

void SuperState::revive()
{
	cout << "处于超级马里奥状态，不用复活" << endl;
}

void SuperState::getMushroom()
{
	mario_->setScore(mario_->getScore()+100);
	cout << "获得蘑菇，分数+100" << endl;
}

void SuperState::getSunFlower()
{
	mario_->setScore(mario_->getScore() + 200);
	mario_->setState(mario_->fireState_);
	cout << "获得太阳花，变身火焰马里奥，分数+200" << endl;
}

string SuperState::getName()
{
	return string("超级马里奥");
}
