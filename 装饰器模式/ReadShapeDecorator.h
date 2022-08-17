#pragma once
#include"ShapeDecorator.h"
#include<iostream>
using namespace std;
class ReadShapeDecorator :public ShapeDecorator
{
public:
	
	ReadShapeDecorator(Shape *shapeDecorator);
	void draw() override;
	void setReadBorder(Shape* shapeDecorator);
};
