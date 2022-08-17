#pragma once
#include"AbstractFactory.h"
<<<<<<< HEAD
class ColorFactory:public AbstractFactory
{
public:
	ColorFactory() {};
	~ColorFactory() {};
	virtual Color* getColor(string colorType)override;
	virtual Shape* getShape(string shapeType)override;
private:

};




=======
class ColorFactory :public AbstractFactory
{
	virtual ~ColorFactory(){}
	virtual Shape* getShape(string shapeType)
	{
		return nullptr;
	}
	virtual Color* getColor(string colorType);

};
>>>>>>> 025bb828bb4963620d8511d5c9f97c75d353c804
