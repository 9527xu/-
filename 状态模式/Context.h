#pragma once
#include<iostream>
class AbstractState;
using namespace std;
class Context
{
private:
	AbstractState*state_;
public:
	void setState(AbstractState* state);
	
	AbstractState* getState();
};