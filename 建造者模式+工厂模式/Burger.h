#pragma once
#include"Item.h"
#include"Wrapper.h"
class Burger:public Item//抽象汉堡类
{
public:
	

	// 通过 Item 继承
	virtual string name()=0;

	virtual Packing* packing() override;

	virtual double price()=0;

};
