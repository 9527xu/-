#include"DeadState.h"
#include"Mario.h"
DeadState::DeadState(Mario *mario)
{
	mario_ = mario;
}

void DeadState::wounded()
{
	cout << "��������״̬�������ܵ��˺�" << endl;
}

void DeadState::revive()
{
	mario_->setState(mario_->normalState_);
	mario_->setScore(0);
	cout << "����¸���" << endl;
}

void DeadState::getMushroom()
{
	cout << "��������״̬���޷����Ģ��" << endl;
}

void DeadState::getSunFlower()
{
	cout << "��������״̬,�޷����̫����" << endl;
}

string DeadState::getName()
{
	return string("���������");
}
