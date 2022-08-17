#pragma once
#include"Color.h"
#include"Shape.h"
//抽像工厂：其他工厂的工厂
class AbstractFactory
{
	
public:
	virtual Color* getColor(string colorType)=0;
	virtual Shape* getShape(string colorType)=0;
};
