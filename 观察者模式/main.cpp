#include"TeacherObserver.h"
#include"StudentObserver.h"

int main()
{
	Bell *bell=new Bell;
	
	TeacherObserver teacherObserver(bell);
	StudentObserver studentObserver(bell);
	bell->setIsClassBell(0);

	bell->setIsClassBell(1);
	delete bell;
	return 0;
}