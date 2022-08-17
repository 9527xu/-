#include"ColorFactory.h"
#include"Read.h"
#include"Green.h"
Color* ColorFactory::getColor(string colorType)
{
	if (colorType == "READ")
	{
		return new Read;
	}
	if (colorType == "GREEN")
	{
		return new Green;
	}
    return nullptr;
}
