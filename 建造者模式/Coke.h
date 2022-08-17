#pragma once
#include"ColdDrink.h"
class Coke :public ColdDrink//可口可乐
{
public:

	// 通过 ColdDrink 继承
	virtual string name() override;
	virtual double price() override;
};
