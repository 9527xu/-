#include"Employee.h"

string Employee::getName()
{
	return name_;
}

string Employee::getDept()
{
	return dept_;
}

double Employee::getSalary()
{
	return salary_;
}

Employee::Employee(string name, string dept, double salary)
{
	name_ = name;
	dept_ = dept;
	salary_ =salary ;
}

void Employee::addSubordinates(Employee* e)
{
	subordinates_.push_back(e);
}

void Employee::removeSubordinates(Employee *e)
{
	subordinates_.remove(e);
}

list<Employee*> Employee::getSubordinates()
{
	return subordinates_;
}
