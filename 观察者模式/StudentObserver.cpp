#include"StudentObserver.h"

StudentObserver::StudentObserver(Bell *bell)//Ҫ��ָ������ã���֤����ͬһ����
{
	bell_ = bell;
	bell_->attach(this);
}

void StudentObserver::update()
{
	if (bell_->getIsClassBell())
	{
		cout << "ͬѧ���Ͽ���"<<endl;
	}
	else cout << "ͬѧ���¿���" << endl;
}
