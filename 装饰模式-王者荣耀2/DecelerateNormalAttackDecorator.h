#pragma once
#include"NormalAttackDecorator.h"
class DecelerateNormalAttackDecorator:public NormalAttackDecorator
{
private:
	string buf_ = "����";
public:
	DecelerateNormalAttackDecorator(NormalAttack* normalAttack);
	// ͨ�� NormalAttackDecorator �̳�
	virtual void attack();
};