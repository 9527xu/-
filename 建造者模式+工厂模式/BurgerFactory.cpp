#include"BurgerFactory.h"

Item* BurgerFactory::getBurger(string burgerType)
{
	if (burgerType == "VEGBURGER")
	{
		return new VegBurger();
	}
	else if (burgerType == "CHICKENBURGER")
	{
		return new ChickenBurger();
	}
	return nullptr;
}