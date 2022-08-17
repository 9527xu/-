#include"ReadShapeDecorator.h"

ReadShapeDecorator::ReadShapeDecorator(Shape* shapeDecorator):ShapeDecorator(shapeDecorator)
{

}

void ReadShapeDecorator::draw()
{
	shapeDecorator_->draw();
	setReadBorder(shapeDecorator_);
}

void ReadShapeDecorator::setReadBorder(Shape* shapeDecorator)
{
	cout << "read border" << endl;
}
