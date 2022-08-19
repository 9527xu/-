#include"RazerFactory.h"
#include"Razer.h"
Mouse* RazerFactory::createMouse()
{
	return new Razer;
}
