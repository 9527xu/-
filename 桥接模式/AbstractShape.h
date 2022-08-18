#pragma once
#include"AbstractDrawAPI.h"
class AbstractShape
{
protected:
	AbstractDrawAPI* abstractDrawAPI_;
public:
	AbstractShape(AbstractDrawAPI* abstractDrawAPI_) :abstractDrawAPI_(abstractDrawAPI_) {}
	virtual void draw() = 0;

};