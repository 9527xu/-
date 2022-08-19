#include"DecelerateNormalAttackDecorator.h"

DecelerateNormalAttackDecorator::DecelerateNormalAttackDecorator(NormalAttack* normalAttack):NormalAttackDecorator(normalAttack)
{
}

void DecelerateNormalAttackDecorator::attack()
{
	normalAttack_->attack();
	cout << "¸½¼Ó" << buf_ << "buf" << endl;
}
