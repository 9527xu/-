#pragma once
#include"Item.h"
#include"Wrapper.h"
class Burger:public Item//���󺺱���
{
public:
	

	// ͨ�� Item �̳�
	virtual string name()=0;

	virtual Packing* packing() override;

	virtual double price()=0;

};
