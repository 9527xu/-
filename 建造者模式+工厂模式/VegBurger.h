#pragma once
#include"Burger.h"
class VegBurger:public Burger//��ʳ����
{
public:

	// ͨ�� Burger �̳�
	virtual string name() override;

	virtual double price() override;

};
