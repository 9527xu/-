#pragma once
#include"AbstractShape.h"
#include"AbstractDrawAPI.h"
class Circle:public AbstractShape
{
private:
	int radius_;
public:
	Circle(int radius, AbstractDrawAPI* abstractDrawAPI);

		// ͨ�� AbstractShape �̳�
	virtual void draw() override;
};