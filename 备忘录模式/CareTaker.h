#pragma once
#include<iostream>
#include"Taker.h"
using namespace std;
#include<deque>
class CareTaker
{
private:
	deque<Taker*>takers_;
	
public:
	void addTaker(Taker* taker);
	Taker* getTaker(int index);
};
