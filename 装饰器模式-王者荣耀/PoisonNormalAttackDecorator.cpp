#include"PoisonNormalAttackDecorator.h"

PoisonNormalAttackDecorator::PoisonNormalAttackDecorator(NormalAttack* normalAttack):NormalAttackDecorator(normalAttack)
{
}

void PoisonNormalAttackDecorator::attack()
{
	normalAttack_->attack();
	cout << "¸½¼Ó" << buf_ << "buf"<<endl;
}
