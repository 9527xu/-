#pragma once
#include"State.h"
class SuperState :public State
{
public:

	SuperState(Mario *mario);
	// ͨ�� State �̳�
	virtual void wounded() override;

	virtual void revive() override;

	virtual void getMushroom() override;

	virtual void getSunFlower() override;

	virtual string getName() override;

};