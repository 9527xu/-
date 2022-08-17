#include "Meal.h"

void Meal::addItem(Item* item)
{
	items.push_back(item);
}

double Meal::getCost()
{
	{
		double cost = 0;
		for (auto item : items)
		{
			cost += item->price();
		}
		return cost;
	}
}

void Meal::showItems()
{
	cout << "ʳ�� " << "��װ��ʽ " << "�۸� " << endl;
	for (auto item : items)
	{
		cout << item->name() << " " << item->packing()->pack() << " " << item->price() << endl;
	}
}
