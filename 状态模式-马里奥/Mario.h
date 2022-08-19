#pragma once
#include"FireState.h"
#include"NormalState.h"
#include"SuperState.h"
#include"DeadState.h"
class Mario:public State
{
private:
	int score_=0;
	//�������ɴ���״̬������ǰ������״̬���浽״̬����

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
	// ͨ�� State �̳�
	virtual void wounded() override;

	virtual void revive() override;

	virtual void getMushroom() override;

	virtual void getSunFlower() override;

	virtual string getName() override;

};