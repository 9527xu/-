#include"StartState.h"

string StartState::getStateInfo()
{
	return string("start state");
}

void StartState::doAction(Context *context)
{
	cout << "player is start state" << endl;
	context->setState(this);
}
