#pragma once
#include"NormalAttack.h"
class InitNormalAttack :public NormalAttack
{
private:
	int addAttack_;
public:
	InitNormalAttack(int addAttack);
	// ͨ�� NormalAttackDecorator �̳�
	virtual void attack() override;
};