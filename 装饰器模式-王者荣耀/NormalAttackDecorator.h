#pragma once
#include"NormalAttack.h"
class NormalAttackDecorator :public NormalAttack
{
protected:
	NormalAttack *normalAttack_;
public:
	NormalAttackDecorator(NormalAttack* normalAttack);

	// Í¨¹ý NormalAttack ¼Ì³Ð
	virtual void attack() override=0;
};