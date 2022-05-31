#include <iostream>
#include <windows.h>

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
    inline void showStudent()
    {
        cout << "ID: " << idNumber << " , Name: " << name << " , Age: " << age << " , Number Of Subjects: " << numOfSubjs << endl;
    }
    inline void showStudent(WORD Color)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
        cout << "ID: " << idNumber << " , Name: " << name << " , Age: " << age << " , Number Of Subjects: " << numOfSubjs << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
    }
};
