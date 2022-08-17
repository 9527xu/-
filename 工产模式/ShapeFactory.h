#pragma once
#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"
#include"Triangle.h"

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
	
	

};


