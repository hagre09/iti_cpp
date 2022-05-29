#include <iostream>
#include "employee.h"

using namespace std;

int Employee:: getId()
{
    return id;
}
void Employee:: setName(string _name)
{
    name = _name;
}
string Employee:: getName()
{
    return name;
}
float Employee:: getSalary()
{
    return salary;
}
void Employee:: setAge(int _age)
{
    age = _age;
}
int Employee:: getAge()
{
    return age;
}
void Employee:: toString()
{
    cout << "ID: " << id << " , Name: " << name << " , Salary: " << salary << " , Age: " << age;
}
