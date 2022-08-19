#pragma once
#include"State.h"
class FireState :public State
{
public:
	FireState(Mario *mario);
	// Í¨¹ý State ¼Ì³Ð
	virtual void wounded() override;
	virtual void revive() override;
	virtual void getMushroom() override;
	virtual void getSunFlower() override;
	virtual string getName() override;
};