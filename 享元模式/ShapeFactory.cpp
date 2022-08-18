#include"ShapeFactory.h"

AbstractShape* ShapeFactory::getCircle(string color)
{
	AbstractShape* circle;
	if (circles_.count(color)==0)
	{
		circle = new Circle(color);
		circles_[color]=circle;
	}
	circle=circles_[color];
	return circle;
}
