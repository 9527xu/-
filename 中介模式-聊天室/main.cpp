#include"User.h"
int main()
{
	User user("lisi");
	user.sendMessage("大家好");
	User user2("zs");
	user2.sendMessage("你好");
	return 0;
}