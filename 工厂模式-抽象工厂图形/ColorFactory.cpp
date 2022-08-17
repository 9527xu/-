#include"ColorFactory.h"
#include"Read.h"
#include"Green.h"
<<<<<<< HEAD
 Color* ColorFactory::getColor(string colorType)
{
	 if (colorType == "READ")
	 {
		 return new Read;
	 }
	 else if (colorType == "GREEN")
	 {
		 return new Green;
	 }
	return nullptr;
}
 Shape* ColorFactory::getShape(string colorType)
 {
	 return nullptr;
 }
=======
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
>>>>>>> 025bb828bb4963620d8511d5c9f97c75d353c804
