#pragma once
#include"NormalAttack.h"
class InitNormalAttack :public NormalAttack
{
private:
	int addAttack_;
public:
	InitNormalAttack(int addAttack);
	// Í¨¹ý NormalAttackDecorator ¼Ì³Ð
	virtual void attack() override;
};