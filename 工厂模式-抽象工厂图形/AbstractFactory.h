#pragma once
#include"Color.h"
#include"Shape.h"
//���񹤳������������Ĺ���
class AbstractFactory
{
	
public:
	virtual Color* getColor(string colorType)=0;
	virtual Shape* getShape(string colorType)=0;
};
