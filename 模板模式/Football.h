#pragma once
#include<iostream>
#include"Snakes.h"
using namespace std;
class Football:public Game
{
	// Í¨¹ý Game ¼Ì³Ð
	virtual void initialize() override;
	virtual void startPlay() override;
	virtual void endPlay() override;
};
