#pragma once
#include"Mouse.h"
#include<iostream>
using namespace std;
class MouseFactory
{
public:
	virtual Mouse* createMouse() = 0;
	
};