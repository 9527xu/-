#pragma once
#include"Burger.h"
class VegBurger:public Burger//ËØÊ³ºº±¤
{
public:

	// Í¨¹ı Burger ¼Ì³Ğ
	virtual string name() override;

	virtual double price() override;

};
