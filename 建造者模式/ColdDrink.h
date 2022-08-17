#pragma once
#include"Item.h"
class ColdDrink:public Item//ÀäÒû
{
public:
	

	// Í¨¹ı Item ¼Ì³Ğ
	virtual string name()=0;

	virtual Packing* packing() override;

	virtual double price()=0;

};
