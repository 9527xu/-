#pragma once
#include"MouseFactory.h"
class RazerFactory :public MouseFactory
{
public:

	// Í¨¹ý MouseFactory ¼Ì³Ð
	virtual Mouse* createMouse() override;
};