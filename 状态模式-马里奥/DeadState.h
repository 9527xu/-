#pragma once
#include"State.h"
class DeadState :public State
{
public:

	DeadState(Mario *mario);
	// Í¨¹ý State ¼Ì³Ð
	virtual void wounded() override;

	virtual void revive() override;

	virtual void getMushroom() override;

	virtual void getSunFlower() override;

	virtual string getName() override;

};