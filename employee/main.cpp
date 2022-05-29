#include <iostream>
#include "employee.h";

using namespace std;

int main()
{
    Employee Emp;

    Emp.getId();
    Emp.setName("Hagr");
    Emp.getSalary();
    Emp.setAge(28);

    Emp.toString();
    return 0;
}
