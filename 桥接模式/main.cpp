#include"Circle.h"
#include"AbstractShape.h"
#include"ReadCircle.h"
#include"GreenCircle.h"
int main()
{
	AbstractShape* readCircle = new Circle(1, new ReadCircle);
	readCircle->draw();
	AbstractShape* greenCircle = new Circle(1, new GreenCircle);
	greenCircle->draw();
}