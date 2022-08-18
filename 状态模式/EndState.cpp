#include"EndState.h"

string EndState::getStateInfo()
{
	return string("end state");
}

void EndState::doAction(Context *context)
{
	cout << "player is end state" << endl;
	context->setState(this);
}
