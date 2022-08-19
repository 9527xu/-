#include"LogitechFactory.h"
#include"Logitech.h"
Mouse* LogitechFactory::createMouse()
{
	return new Logitech;
}
