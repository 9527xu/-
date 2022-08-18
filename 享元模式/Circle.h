#pragma once
#include"AbstractShape.h"

class Circle :public AbstractShape
{
private:
	int radius_;
	string color_;
public:
	Circle(string color);
	void setRadius(int radius);
	
	// ͨ�� AbstractShape �̳�
	virtual void draw() override;
};