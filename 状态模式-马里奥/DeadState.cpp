#include"DeadState.h"
#include"Mario.h"
DeadState::DeadState(Mario *mario)
{
	mario_ = mario;
}

void DeadState::wounded()
{
	cout << "处于死亡状态，不会受到伤害" << endl;
}

void DeadState::revive()
{
	mario_->setState(mario_->normalState_);
	mario_->setScore(0);
	cout << "马里奥复活" << endl;
}

void DeadState::getMushroom()
{
	cout << "处于死亡状态，无法获得蘑菇" << endl;
}

void DeadState::getSunFlower()
{
	cout << "处于死亡状态,无法获得太阳花" << endl;
}

string DeadState::getName()
{
	return string("死亡马里奥");
}
