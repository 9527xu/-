#pragma once
#include"Item.h"
class ColdDrink:public Item//����
{
public:
	

	// ͨ�� Item �̳�
	virtual string name()=0;

	virtual Packing* packing() override;

	virtual double price()=0;

};
