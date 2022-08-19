#include"NormalAttack.h"
#include"PoisonNormalAttackDecorator.h"
#include"InitNormalAttack.h"
int main()
{
	
	NormalAttackDecorator* normalAttackDecorator = new PoisonNormalAttackDecorator(new InitNormalAttack(50));
	normalAttackDecorator->attack();
}