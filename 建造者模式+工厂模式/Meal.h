#pragma once
#include"Item.h"
#include<list>
#include<vector>
class Meal//²Ëµ¥
{
private:
	list<Item*>items;
public:
	void addItem(Item* item);
	

	double getCost();
	
	void showItems();
	

};
