#pragma once
#include<iostream>
using namespace std;
class AbstractDrawAPI
{
public:
	virtual void drawCircle(int radius)=0;
};