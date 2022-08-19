#pragma once
#include"MouseFactory.h"
class LogitechFactory :public MouseFactory
{
public:

	// Í¨¹ý MouseFactory ¼Ì³Ð
	virtual Mouse* createMouse() override;
};