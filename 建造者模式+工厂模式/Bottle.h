#pragma once
#include"Packing.h"
class Bottle:public Packing
{
public:
	string pack() override;
};
