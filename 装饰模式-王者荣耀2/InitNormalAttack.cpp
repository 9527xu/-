#include"InitNormalAttack.h"

InitNormalAttack::InitNormalAttack(int addAttack)
{
	addAttack_ = addAttack;
}

void InitNormalAttack::attack()
{
	cout << "�����" << addAttack_ << "���˺�" << endl;
}
