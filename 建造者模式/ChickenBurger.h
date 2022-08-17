#pragma once
#include"Burger.h"
class ChickenBurger :public Burger
{
public:
	// Í¨¹ý Burger ¼Ì³Ð
	virtual string name() override;
	virtual double price() override;
};
