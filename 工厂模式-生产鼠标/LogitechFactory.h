#pragma once
#include"MouseFactory.h"
class LogitechFactory :public MouseFactory
{
public:

	// ͨ�� MouseFactory �̳�
	virtual Mouse* createMouse() override;
};