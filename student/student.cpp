#include "student.h"

student:: student() : student(1, "Hagr", 28, 5)
{
}
student:: student(int _idNumber) : student(_idNumber, "Hagr", 28, 5)
{
}
student:: student(int _idNumber, string _name) : student(_idNumber, _name, 28, 5)
{
}
student:: student(int _idNumber, string _name, int _age) : student(_idNumber, _name, _age,5)
{
}
student:: student(int _idNumber, string _name, int _age, int _numOfSubjs)
{
    idNumber = _idNumber;
    name = _name;
    age = _age;
    numOfSubjs = _numOfSubjs;
}

void student:: setId(int _idNumber)
{
    idNumber = _idNumber;
}
int student:: getId()
{
    return idNumber;
}
void student:: setName(string _name)
{
    name = _name;
}
string student:: getName()
{
    return name;
}
void student:: setAge(int _age)
{
    age = _age;
}
int student:: getAge()
{
    return age;
}
void student:: setNumOfSubjs(int _numOfSubjs)
{
    numOfSubjs = _numOfSubjs;
}
int student:: getNumOfSubjs()
{
    return numOfSubjs;
}
