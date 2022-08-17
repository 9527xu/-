#pragma once

#include"Bell.h"
class StudentObserver:public Observer
{
private:
	Bell *bell_;
public:
	StudentObserver(Bell *bell);
	
	void update();
	
};