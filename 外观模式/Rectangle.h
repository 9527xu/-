#pragma once
#include"Shape.h"
class Rectangle :public Shape
{
protected:

	friend class ShapeMarker;
	// ͨ�� Shape �̳�
	virtual void draw() override;

};
