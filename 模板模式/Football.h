#pragma once
#include<iostream>
#include"Snakes.h"
using namespace std;
class Football:public Game
{
	// ͨ�� Game �̳�
	virtual void initialize() override;
	virtual void startPlay() override;
	virtual void endPlay() override;
};
