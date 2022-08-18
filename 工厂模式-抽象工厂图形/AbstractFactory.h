#pragma once
#include"Color.h"
#include"Shape.h"

/*
抽象工厂就像一个超级工厂，可以生产不同的产品。如小米不仅可以生产手机，也可以生产电视
*/

class AbstractFactory
{
	
public:
	virtual Color* getColor(string colorType)=0;

	virtual Shape* getShape(string shapeType)=0;

};
