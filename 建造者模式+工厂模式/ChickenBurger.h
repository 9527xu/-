#pragma once
#include"Burger.h"
class ChickenBurger :public Burger
{
public:
	// ͨ�� Burger �̳�
	virtual string name() override;
	virtual double price() override;
};
