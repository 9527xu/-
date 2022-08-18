#include"Originator.h"
int main()
{
	//发起人
	Originator originator;
	originator.setState("我在写1");
	originator.setState("我在写2");
	//保存信息
	originator.saveStateToTaker();
	originator.setState("我在写3");
	originator.saveStateToTaker();
	originator.setState("我在写4");
	originator.saveStateToTaker();
	cout<<originator.getState();
	return 0;
}