#include <iostream>

using namespace std;

struct Employee
{
private:
    int id = 1;
    string name;
    float salary = 5000;
    int age;

public:
    int getId();
    void setName(string _name);
    string getName();
    float getSalary();
    void setAge(int _age);
    int getAge();
    void toString();
};

