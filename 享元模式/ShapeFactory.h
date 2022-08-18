#pragma once
#include<map>
#include<iostream>
using namespace std;
#include"AbstractShape.h"
#include"Circle.h"
class ShapeFactory
{
	map<string, AbstractShape*>circles_;
public:
	AbstractShape* getCircle(string color);
};