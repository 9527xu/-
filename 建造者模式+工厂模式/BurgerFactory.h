#pragma once
#include"Item.h"
#include"VegBurger.h"
#include"ChickenBurger.h"
class BurgerFactory
{
public:
	static Item* getBurger(string burgerType);
};
