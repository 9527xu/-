#include "User.h"
#include"ChatRoom.h"//该头文件一定要声明在这里，不能声明到.h。
//声明到.h形成ChatRoom有User、User有ChatRoom。编译无法通过
User::User()
{
}

User::User(string name)
{
	this->name = name;
}

string User::getName()
{
	return name;
}

void User::setName(string name)
{
	this->name = name;
}

void User::sendMessage(string message)
{
	ChatRoom::showMessage(this, message);
}
