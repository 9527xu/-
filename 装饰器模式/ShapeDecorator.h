#pragma once
#include"Shape.h"
/*װ��ģʽ������չ�ӹ��ܣ����ֲ�Ӱ������*/
class ShapeDecorator:public Shape
{
protected:
	Shape* shapeDecorator_;
public:
	
	ShapeDecorator(Shape *shapeDecorator);
	// ͨ�� Shape �̳�
	virtual void draw() override;

};
