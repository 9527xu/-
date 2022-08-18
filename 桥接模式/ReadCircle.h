#pragma once
#include"AbstractDrawAPI.h"
class ReadCircle :public AbstractDrawAPI
{
public:

	// Í¨¹ý AbstractDrawAPI ¼Ì³Ð
	virtual void drawCircle(int radius) override;
};