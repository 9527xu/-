#include<iostream>
using namespace std;
#include"ProducerFactory.h"
int main()
{
	//获取图形工厂
	AbstractFactory* shapeFactory = ProducerFactory::getFactory("SHAPE");
	//获取颜色工厂
	AbstractFactory* colorFactory = ProducerFactory::getFactory("COLOR");
	//生产圆形
	Shape* circle = shapeFactory->getShape("CIRCLE");
	//画圆
	circle->draw();

	
	//生产绿色画笔
	Color *green = colorFactory->getColor("GREEN");
	//填充
	green->fill();

	//生产三角形
	Shape* triangle = shapeFactory->getShape("TRIANGLE");
	//画三角形
	triangle->draw();
	//生产红色画笔
	Color* read = colorFactory->getColor("READ");
	//填充
	read->fill();

	//生产圆形用绿色画笔填充
	Shape* rectangle = shapeFactory->getShape("RECTANGLE");
	rectangle->draw();
	read->fill();

	//释放内存
	delete read;
	delete rectangle;
	delete triangle;
	delete green;
	delete circle;
	delete colorFactory;
	delete shapeFactory;
}