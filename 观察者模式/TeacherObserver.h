#pragma once
#include"Bell.h"
class TeacherObserver:public Observer
{
private:
	Bell *bell_;
public:
	TeacherObserver(Bell *bell);
	

	// ͨ�� Observer �̳�
	virtual void update() override;

};
