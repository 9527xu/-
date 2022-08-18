
#include"StartState.h"
#include"EndState.h"
int main()
{
	
	Context *context= new Context;//使用指针避免变量的浅拷贝。操作的是同一对象
	AbstractState*startState = new StartState;
	startState->doAction(context);
	context->getState()->getStateInfo();

	AbstractState* endState = new EndState;
	endState->doAction(context);
	context->getState()->getStateInfo();

	delete context;
	delete startState;

}