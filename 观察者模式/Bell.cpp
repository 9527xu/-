#include"Bell.h"
void Bell::notifyAllObservers()
{
	for (auto observer : observers_)
	{
		observer->update();
	}
}

bool Bell::getIsClassBell()
{
	return isClassBell_;
}

void Bell::setIsClassBell(bool isClassBell)
{
	isClassBell_ = isClassBell;
	notifyAllObservers();
}

void Bell::attach(Observer* observer)
{
	observers_.push_back(observer);
}
