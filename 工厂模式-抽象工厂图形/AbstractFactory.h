#pragma once
#include"Color.h"
#include"Shape.h"
<<<<<<< HEAD
//���񹤳������������Ĺ���
=======
/*
���󹤳�����һ����������������������ͬ�Ĳ�Ʒ����С�ײ������������ֻ���Ҳ������������
*/
>>>>>>> 025bb828bb4963620d8511d5c9f97c75d353c804
class AbstractFactory
{
	
public:
	virtual Color* getColor(string colorType)=0;
<<<<<<< HEAD
	virtual Shape* getShape(string colorType)=0;
=======
	virtual Shape* getShape(string shapeType)=0;
>>>>>>> 025bb828bb4963620d8511d5c9f97c75d353c804
};
