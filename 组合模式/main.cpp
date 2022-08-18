#include<iostream>
#include"Employee.h"
int main()
{
    Employee* ceo = new Employee("John", "CEO", 300000.5);

    Employee* headSales = new Employee("Robert", "Head Sales", 200000);
    Employee* headMarketinh = new Employee("Michel", "Head Marketing", 200000);
    ceo->addSubordinates(headSales);
    ceo->addSubordinates(headMarketinh);

    
    Employee* market1 = new Employee("Laura", "Marketing", 100000);
    Employee* market2 = new Employee("Laura2", "Marketing", 100000);
    headMarketinh->addSubordinates(market1);
    headMarketinh->addSubordinates(market2);

    Employee* sales1 = new Employee("Sales1", "Sales", 100000);
    Employee* sales2 = new Employee("Sales2", "Sales", 100000);
    headSales->addSubordinates(sales1);
    headSales->addSubordinates(sales2);

    for (auto headEmployee : ceo->getSubordinates())
    {
        cout << headEmployee->getName() << " " << headEmployee->getDept() << " " << headEmployee->getSalary() << endl;
        for (auto employee : headEmployee->getSubordinates())
        {
            cout << employee->getName() << " " << employee->getDept() << " " << employee->getSalary() << endl;
        }
    }
    return 0;
}