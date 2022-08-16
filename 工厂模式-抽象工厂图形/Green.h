#pragma once
#include"Color.h"
class Green:public Color
{
	virtual void fill()
	{
		cout << "fill Green" << endl;
	}
};
