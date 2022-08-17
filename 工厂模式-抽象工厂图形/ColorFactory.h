#pragma once
#include"AbstractFactory.h"
class ColorFactory :public AbstractFactory
{
	virtual ~ColorFactory(){}
	virtual Shape* getShape(string shapeType)
	{
		return nullptr;
	}
	virtual Color* getColor(string colorType);

};