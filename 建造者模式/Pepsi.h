#pragma once
#include"ColdDrink.h"
class Pepsi :public ColdDrink
{
public:

	// ͨ�� ColdDrink �̳�
	virtual string name() override;
	virtual double price() override;
};
