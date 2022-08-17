#pragma once
#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"
#include"Triangle.h"
#include"AbstractFactory.h"
class ShapeFactory:public AbstractFactory
{
public:
	virtual Shape* getShape(string shapeType)override;
	
	virtual Color* getColor(string colorType)override { return nullptr; }

};


