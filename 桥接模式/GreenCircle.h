#pragma once
#include"AbstractDrawAPI.h"
class GreenCircle :public AbstractDrawAPI
{
public:

	// Í¨¹ý AbstractDrawAPI ¼Ì³Ð
	virtual void drawCircle(int radius) override;
};