#pragma once
#include"ColdDrink.h"
class Pepsi :public ColdDrink
{
public:

	// Í¨¹ý ColdDrink ¼Ì³Ð
	virtual string name() override;
	virtual double price() override;
};
