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
	cout << "�ܵ��˺���������������������" << endl;
}

void NormalState::revive()
{
	cout << "��������״̬��û���������޷�����" << endl;
}

void NormalState::getMushroom()
{
	mario_->setScore(mario_->getScore() + 100);
	mario_->setState(mario_->superState_);
	cout << "���Ģ��������+100�������������" << endl;
}

void NormalState::getSunFlower()
{
	mario_->setScore(mario_->getScore() + 200);
	mario_->setState(mario_->fireState_);
	cout << "���̫����������+200��������������" << endl;
}

string NormalState::getName()
{
	return string("��ͨ�����");
}
