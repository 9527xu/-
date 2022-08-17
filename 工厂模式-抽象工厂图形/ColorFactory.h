#pragma once
#include"AbstractFactory.h"
class ColorFactory:public AbstractFactory
{
public:
	ColorFactory() {};
	~ColorFactory() {};
	virtual Color* getColor(string colorType)override;
	virtual Shape* getShape(string shapeType)override;
private:

};




