#include"ReadShapeDecorator.h"
#include"Triangle.h"
int main()
{
	Shape*triangle=new Triangle;

	triangle->draw();
	cout << endl;
	ShapeDecorator triangleDecorator = new ReadShapeDecorator(triangle);
	triangleDecorator.draw();
}