#include "User.h"
#include"ChatRoom.h"//��ͷ�ļ�һ��Ҫ�������������������.h��
//������.h�γ�ChatRoom��User��User��ChatRoom�������޷�ͨ��
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
