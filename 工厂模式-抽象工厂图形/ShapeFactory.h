#pragma once
#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"
#include"Triangle.h"
<<<<<<< HEAD
#include"AbstractFactory.h"
class ShapeFactory:public AbstractFactory
{
public:
	virtual Shape* getShape(string shapeType)override;
	
	virtual Color* getColor(string colorType)override { return nullptr; }
=======
#include"Color.h"
class ShapeFactory
{
public:
	Shape* getShape(string shapeType)
	{
		if (shapeType == "CIRCLE")
		{
			return new Circle;
		}
		else if (shapeType == "TRIANGLE")
		{
			return new Triangle;
		}
		else if (shapeType == "RECTANGLE")
		{
			return new Rectangle;
		}
		return nullptr;
	}
	Color* getColor(string colorType);
>>>>>>> 025bb828bb4963620d8511d5c9f97c75d353c804

};


