#include"NormalState.h"
#include"Mario.h"
NormalState::NormalState(Mario* mario)
{
	mario_ = mario;
}

void NormalState::wounded()
{
	mario_->setScore(0);
	mario_->setState(mario_->deadState_);
	cout << "受到伤害，马里奥死亡，分数清空" << endl;
}

void NormalState::revive()
{
	cout << "处于正常状态并没有死亡，无法复活" << endl;
}

void NormalState::getMushroom()
{
	mario_->setScore(mario_->getScore() + 100);
	mario_->setState(mario_->superState_);
	cout << "获得蘑菇，分数+100，变身超级马里奥" << endl;
}

void NormalState::getSunFlower()
{
	mario_->setScore(mario_->getScore() + 200);
	mario_->setState(mario_->fireState_);
	cout << "获得太阳花，分数+200，变身火焰马里奥" << endl;
}

string NormalState::getName()
{
	return string("普通马里奥");
}
