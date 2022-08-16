#pragma once
#include"Color.h"
class Read:public Color
{
public:
	virtual void fill()
	{
		cout << "fill Read" << endl;
	}
};
