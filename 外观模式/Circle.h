#pragma once
#include"Shape.h"
class Circle:public Shape
{
protected:
	friend class ShapeMarker;
	// ͨ�� Shape �̳�
	virtual void draw() override;
};
