#pragma once
#include"Shape.h"
/*装饰模式用于拓展子功能，而又不影响整体*/
class ShapeDecorator:public Shape
{
protected:
	Shape* shapeDecorator_;
public:
	
	ShapeDecorator(Shape *shapeDecorator);
	// 通过 Shape 继承
	virtual void draw() override;

};
