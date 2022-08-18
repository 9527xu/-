#include"InitNormalAttack.h"

InitNormalAttack::InitNormalAttack(int addAttack)
{
	addAttack_ = addAttack;
}

void InitNormalAttack::attack()
{
	cout << "打出了" << addAttack_ << "点伤害" << endl;
}
