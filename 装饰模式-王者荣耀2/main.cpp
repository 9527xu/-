#include"DecelerateNormalAttackDecorator.h"
#include"PoisonNormalAttackDecorator.h"
#include"InitNormalAttack.h"
int main()
{
	//װ��ģʽ���Ƕ�����ޣ������ڵݹ�
	NormalAttack* attack = new DecelerateNormalAttackDecorator(new PoisonNormalAttackDecorator(new InitNormalAttack(120)));
	attack->attack();
}