#pragma once
#include"MouseFactory.h"
class RazerFactory :public MouseFactory
{
public:

	// ͨ�� MouseFactory �̳�
	virtual Mouse* createMouse() override;
};