#pragma once
#include"NormalAttack.h"
class NormalAttackDecorator :public NormalAttack
{
protected:
	NormalAttack *normalAttack_;
public:
	NormalAttackDecorator(NormalAttack* normalAttack);

	// ͨ�� NormalAttack �̳�
	virtual void attack() override=0;
};