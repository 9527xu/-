#include"Originator.h"
int main()
{
	//������
	Originator originator;
	originator.setState("����д1");
	originator.setState("����д2");
	//������Ϣ
	originator.saveStateToTaker();
	originator.setState("����д3");
	originator.saveStateToTaker();
	originator.setState("����д4");
	originator.saveStateToTaker();
	cout<<originator.getState();
	return 0;
}