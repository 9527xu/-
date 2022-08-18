#include"Circle.h"

Circle::Circle(int radius, AbstractDrawAPI* abstractDrawAPI):AbstractShape(abstractDrawAPI)
{
	radius_ = radius;
}

void Circle::draw()
{
	abstractDrawAPI_->drawCircle(radius_);
}
