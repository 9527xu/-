#pragma once
#include"NormalAttackDecorator.h"
class PoisonNormalAttackDecorator:public NormalAttackDecorator
{
private:
	string buf_ = "ÖÐ¶¾";
public:

	PoisonNormalAttackDecorator(NormalAttack* NormalAttack);
	// Í¨¹ý NormalAttackDecorator ¼Ì³Ð
	virtual void attack() override;

};