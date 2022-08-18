#include"NormalAttack.h"
#include"PoisonNormalAttackDecorator.h"
#include"InitNormalAttack.h"
int main()
{
	NormalAttack* initAttack = new InitNormalAttack(50);
	initAttack->attack();
	NormalAttackDecorator* normalAttackDecorator = new PoisonNormalAttackDecorator(initAttack);
	normalAttackDecorator->attack();
}