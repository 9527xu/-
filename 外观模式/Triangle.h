#pragma once
#include"Shape.h"
class Triangle :public Shape
{
protected:
	friend class ShapeMarker;
	// ͨ�� Shape �̳�
	virtual void draw() override;

};
