#include"ShapeFactory.h"
int main()
{
	ShapeFactory shapeFactory;
	Shape* shape1 = shapeFactory.getShape("CIRCLE");
	shape1->draw();
	Shape* shape2 = shapeFactory.getShape("RECTANGLE");
	shape2->draw();
	Shape* shape3 = shapeFactory.getShape("TRIANGLE");
	shape3->draw();
	delete shape1;
	delete shape2;
	delete shape3;
}