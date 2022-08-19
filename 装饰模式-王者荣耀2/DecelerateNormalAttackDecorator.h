#pragma once
#include"NormalAttackDecorator.h"
class DecelerateNormalAttackDecorator:public NormalAttackDecorator
{
private:
	string buf_ = "¼õËÙ";
public:
	DecelerateNormalAttackDecorator(NormalAttack* normalAttack);
	// Í¨¹ý NormalAttackDecorator ¼Ì³Ð
	virtual void attack();
};