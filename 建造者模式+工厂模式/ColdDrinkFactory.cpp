#include"ColdDrinkFactory.h"
Item* ColdDrinkFactory::getColdDrink(string coldDrinkType)
{
	if (coldDrinkType == "PEPSI")
	{
		return new Pepsi;
	}
	else if (coldDrinkType == "COKE")
	{
		return new Coke;
	}
	return nullptr;
}