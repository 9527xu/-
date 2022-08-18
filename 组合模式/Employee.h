#pragma once
#include<iostream>
using namespace std;
#include<list>
class Employee
{
private:
	string name_;
	string dept_;
	double salary_;
	list<Employee*>subordinates_;
public:
	string getName();
	string getDept();
	double getSalary();
	Employee(string name,string dept,double salary);
	void addSubordinates(Employee *e);
	void removeSubordinates(Employee *e);
	list<Employee*> getSubordinates();
};
