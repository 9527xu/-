#include"Circle.h"

Circle::Circle(string color)
{
	
	color_ = color;
}

void Circle::setRadius(int radius)
{
	radius_ = radius;
}

void Circle::draw()
{
	cout << " draw circle,radius" << radius_ << ", color" << color_ << endl;
}
