#pragma once
#include"Color.h"
#include"Shape.h"
class AbstractFactory
{
public:
	virtual Color* getColor(string colorType);
	//virtual Shape* getShape(string shapeType);
};
