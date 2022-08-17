#include"ShapeDecorator.h"

ShapeDecorator::ShapeDecorator(Shape *shapeDecorator)
{
	shapeDecorator_ = shapeDecorator;
}

void ShapeDecorator::draw()
{
	shapeDecorator_->draw();
}
