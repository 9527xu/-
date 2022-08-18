#include"TeacherObserver.h"

TeacherObserver::TeacherObserver(Bell *bell)//用指针，保证操作同一对象
{
	bell_ = bell;
	
	bell_->attach(this);
	
	
}

void TeacherObserver::update()
{
	if (bell_->getIsClassBell())
	{
		cout << "老师授课了" << endl;
	}
	else cout << "老师辛苦了" << endl;
}
