#include"DecelerateNormalAttackDecorator.h"
#include"PoisonNormalAttackDecorator.h"
#include"InitNormalAttack.h"
int main()
{
	//装饰模式就是多层套娃，类似于递归
	NormalAttack* attack = new DecelerateNormalAttackDecorator(new PoisonNormalAttackDecorator(new InitNormalAttack(120)));
	attack->attack();
}