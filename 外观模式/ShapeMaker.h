#pragma once
#include"Rectangle.h"
#include"Circle.h"
#include"Triangle.h"
class ShapeMarker
{
private:
	Rectangle rectangle;
	Circle circle;
	Triangle triangle;
public:
	void drawRectangle();
	void drawCircle();
	void drawTriangle();

};
