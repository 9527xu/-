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
	cout << "�ܵ��˺�����س��������" << endl;
}

void FireState::revive()
{
	cout << "���ڻ��������״̬����δ����" << endl;
}

void FireState::getMushroom()
{
	mario_->setScore(mario_->getScore()+100);
	cout << "���Ģ������+100" << endl;
}

void FireState::getSunFlower()
{
	mario_->setScore(mario_->getScore() + 200);
	cout << "���̫����������+200" << endl;
}

string FireState::getName()
{
	return string("���������");
}
