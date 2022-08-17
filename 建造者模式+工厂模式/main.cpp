#include"Meal.h"
#include"BurgerFactory.h"
#include"ColdDrinkFactory.h"
Meal prepareMeal()
{
	Item* burgerItem = BurgerFactory::getBurger("VEGBURGER");
	Item* coldDrink = ColdDrinkFactory::getColdDrink("PEPSI");
	Meal meal1;
	meal1.addItem(burgerItem);
	meal1.addItem(coldDrink);
	return meal1;
}

int main()
{
	Meal meal = prepareMeal();
	meal.showItems();

	return 0;
}