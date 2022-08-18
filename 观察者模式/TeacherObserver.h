#pragma once
#include"Bell.h"
class TeacherObserver:public Observer
{
private:
	Bell *bell_;
public:
	TeacherObserver(Bell *bell);
	

	// Í¨¹ý Observer ¼Ì³Ð
	virtual void update() override;

};
