#pragma once
#include"Pepsi.h"
#include"Coke.h"

class ColdDrinkFactory
{
public:
	static Item* getColdDrink(string coldDrinkType);
};
