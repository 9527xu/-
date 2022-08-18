#pragma once
#include"Color.h"
#include"Shape.h"

/*
���󹤳�����һ����������������������ͬ�Ĳ�Ʒ����С�ײ������������ֻ���Ҳ������������
*/

class AbstractFactory
{
	
public:
	virtual Color* getColor(string colorType)=0;

	virtual Shape* getShape(string shapeType)=0;

};
