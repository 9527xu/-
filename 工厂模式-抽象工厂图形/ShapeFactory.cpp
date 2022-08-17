#include"ShapeFactory.h"
Shape* ShapeFactory::getShape(string shapeType)
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