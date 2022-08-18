
#include"StartState.h"
#include"EndState.h"
int main()
{
	
	Context *context= new Context;
	AbstractState*startState = new StartState;
	startState->doAction(context);
	context->getState()->getStateInfo();

	AbstractState* endState = new EndState;
	endState->doAction(context);
	context->getState()->getStateInfo();

	delete context;
	delete startState;

}