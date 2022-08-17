#include"ChatRoom.h"
void ChatRoom::showMessage(User *user, string message)
{
	cout << user->getName() << ":" << message << endl;
}