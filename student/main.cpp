#include <iostream>
#include "student.h"

using namespace std;

int main()
{
    student st0;
    student st1 = student(2);
    student st2 = student(3, "Emad");
    student st3 = student(4, "Mohamed", 2);
    student st4 = student(5, "Marim", 27, 5);

    st0.showStudent();
    st1.showStudent();
    st2.showStudent();
    st3.showStudent();
    st4.showStudent();

    st4.showStudent(FOREGROUND_GREEN);


    return 0;
}
