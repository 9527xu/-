#pragma once
#include"AbstractShape.h"
#include"AbstractDrawAPI.h"
class Circle:public AbstractShape
{
private:
	int radius_;
public:
	Circle(int radius, AbstractDrawAPI* abstractDrawAPI);

		// Í¨¹ý AbstractShape ¼Ì³Ð
	virtual void draw() override;
};