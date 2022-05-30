#include <iostream>

using namespace std;

struct student
{
private:
    int idNumber;
    string name;
    int age;
    int numOfSubjs;
public:
    string subjects[3]={"Arabic", "Math", "Science"};
    student();
    student(int _idNumber);
    student(int _idNumber, string _name);
    student(int _idNumber, string _name, int _age);
    student(int _idNumber, string _name, int _age, int numOfSubjs);
    void setId(int _idNumber);
    int getId();
    void setName(string _name);
    string getName();
    void setAge(int _age);
    int getAge();
    void setNumOfSubjs(int _numOfSubjs);
    int getNumOfSubjs();
    void showStudent();
};
