#pragma once
#include"ColdDrink.h"
class Coke :public ColdDrink//�ɿڿ���
{
public:

	// ͨ�� ColdDrink �̳�
	virtual string name() override;
	virtual double price() override;
};
