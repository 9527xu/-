#pragma once
#include"Shape.h"
class Rectangle :public Shape
{
protected:

	friend class ShapeMarker;
	// Í¨¹ý Shape ¼Ì³Ð
	virtual void draw() override;

};
