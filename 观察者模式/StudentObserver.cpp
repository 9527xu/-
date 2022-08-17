#include"StudentObserver.h"

StudentObserver::StudentObserver(Bell *bell)//要用指针或引用，保证操作同一对象
{
	bell_ = bell;
	bell_->attach(this);
}

void StudentObserver::update()
{
	if (bell_->getIsClassBell())
	{
		cout << "同学们上课了"<<endl;
	}
	else cout << "同学们下课了" << endl;
}
