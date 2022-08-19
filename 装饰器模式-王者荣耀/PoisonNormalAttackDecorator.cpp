#include"PoisonNormalAttackDecorator.h"

PoisonNormalAttackDecorator::PoisonNormalAttackDecorator(NormalAttack* normalAttack):NormalAttackDecorator(normalAttack)
{
}

void PoisonNormalAttackDecorator::attack()
{
	normalAttack_->attack();
	cout << "����" << buf_ << "buf"<<endl;
}
