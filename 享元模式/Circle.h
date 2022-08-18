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
	
	// Í¨¹ý AbstractShape ¼Ì³Ð
	virtual void draw() override;
};