#include"TeacherObserver.h"

TeacherObserver::TeacherObserver(Bell *bell)//��ָ�룬��֤����ͬһ����
{
	bell_ = bell;
	
	bell_->attach(this);
	
	
}

void TeacherObserver::update()
{
	if (bell_->getIsClassBell())
	{
		cout << "��ʦ�ڿ���" << endl;
	}
	else cout << "��ʦ������" << endl;
}
