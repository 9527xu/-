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
	cout << "�ܵ��˺�������-100" << endl;
}

void SuperState::revive()
{
	cout << "���ڳ��������״̬�����ø���" << endl;
}

void SuperState::getMushroom()
{
	mario_->setScore(mario_->getScore()+100);
	cout << "���Ģ��������+100" << endl;
}

void SuperState::getSunFlower()
{
	mario_->setScore(mario_->getScore() + 200);
	mario_->setState(mario_->fireState_);
	cout << "���̫�����������������£�����+200" << endl;
}

string SuperState::getName()
{
	return string("���������");
}
