#pragma once
#include"AbstractDrawAPI.h"
class GreenCircle :public AbstractDrawAPI
{
public:

	// ͨ�� AbstractDrawAPI �̳�
	virtual void drawCircle(int radius) override;
};