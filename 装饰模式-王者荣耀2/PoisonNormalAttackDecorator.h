#pragma once
#include"NormalAttackDecorator.h"
class PoisonNormalAttackDecorator:public NormalAttackDecorator
{
private:
	string buf_ = "�ж�";
public:

	PoisonNormalAttackDecorator(NormalAttack* NormalAttack);
	// ͨ�� NormalAttackDecorator �̳�
	virtual void attack() override;

};