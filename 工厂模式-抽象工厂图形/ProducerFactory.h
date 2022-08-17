#pragma once
#include"AbstractFactory.h"
#include"ColorFactory.h"
#include"ShapeFactory.h"
class ProducerFactory
{
public:
	static AbstractFactory* getFactory(string factoryType);
};
