#include"ProducerFactory.h"

AbstractFactory* ProducerFactory::getFactory(string factoryType)
{
	if (factoryType == "SHAPE")
	{
		return new ShapeFactory;
	}
	else if (factoryType == "COLOR")
	{
		return new ColorFactory;
	}
	return nullptr;
}
