#pragma once
#include"FireState.h"
#include"NormalState.h"
#include"SuperState.h"
#include"DeadState.h"
class Mario:public State
{
private:
	int score_=0;
	//避免生成大量状态对象，提前将所有状态缓存到状态机中

	State* state_;
public:
	FireState* fireState_ = new FireState(this);
	NormalState* normalState_ = new NormalState(this);
	SuperState* superState_ = new SuperState(this);
	DeadState* deadState_ = new DeadState(this);
	Mario();
	int getScore();
	void setScore(int score);
	void setState(State* state);
	State* getState();
	// 通过 State 继承
	virtual void wounded() override;

	virtual void revive() override;

	virtual void getMushroom() override;

	virtual void getSunFlower() override;

	virtual string getName() override;

};