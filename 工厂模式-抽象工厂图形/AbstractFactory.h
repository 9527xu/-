#pragma once
#include"Color.h"
#include"Shape.h"
<<<<<<< HEAD
//抽像工厂：其他工厂的工厂
=======
/*
抽象工厂就像一个超级工厂，可以生产不同的产品。如小米不仅可以生产手机，也可以生产电视
*/
>>>>>>> 025bb828bb4963620d8511d5c9f97c75d353c804
class AbstractFactory
{
	
public:
	virtual Color* getColor(string colorType)=0;
<<<<<<< HEAD
	virtual Shape* getShape(string colorType)=0;
=======
	virtual Shape* getShape(string shapeType)=0;
>>>>>>> 025bb828bb4963620d8511d5c9f97c75d353c804
};
