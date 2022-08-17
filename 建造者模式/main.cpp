#include"Meal.h"
#include"VegBurger.h"
#include"ChickenBurger.h"
#include"Pepsi.h"
#include"Coke.h"
Meal prepareVegMeal()
{
	Item* burgerItem = new VegBurger();
	Item* coldDrink = new Pepsi;
	Meal meal1;
	meal1.addItem(burgerItem);
	meal1.addItem(coldDrink);
	return meal1;
}
Meal prepareChickenMeal()
{
	Item* burgerItem = new ChickenBurger();
	Item* coldDrink = new Coke;
	Meal meal1;
	meal1.addItem(burgerItem);
	meal1.addItem(coldDrink);
	return meal1;
}
int main()
{
	Meal meal = prepareVegMeal();
	meal.showItems();

	meal = prepareChickenMeal();
	meal.showItems();
	return 0;
}