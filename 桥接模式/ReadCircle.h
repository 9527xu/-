#pragma once
#include"AbstractDrawAPI.h"
class ReadCircle :public AbstractDrawAPI
{
public:

	// ͨ�� AbstractDrawAPI �̳�
	virtual void drawCircle(int radius) override;
};