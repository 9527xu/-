#pragma once
#include"Game.h"
#include<iostream>
using namespace std;
class Snakes:public Game
{
	// ͨ�� Game �̳�
	virtual void initialize() override;
	virtual void startPlay() override;
	virtual void endPlay() override;
};
