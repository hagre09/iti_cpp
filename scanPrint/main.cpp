#include <iostream>

using namespace std;
    // cout << "Hello world!" << endl;


struct Emplyee
{
    int id;
    char name[250];
    float salary;
};

enum UserOption
{
    Add=1,
    Edit=2,
    Delete=3,
    Show=4,
    All =5,
    Exit= 6

};

typedef enum UserOption UserOption;
typedef struct Emplyee Employee;

Employee list[10];
int TopOfStack = 0;

void ShowMenu()
{
    cout << "Choose an Option " << endl;
    cout << "1-for Add"  << endl;
    cout << "2-for Edit " << endl;
    cout << "3-for delete " <<endl;
    cout << "4-for show " <<endl;
    cout << "5-for show all " <<endl;
    cout << "6-for exit " <<endl;
}
void ShowEmployee(const Employee *e1)
{
    //e1.salary = 0; read only
    cout <<"ID : " << e1->id << " - Name : " << e1->name <<
        " - salary : " << e1->salary <<endl;
}
void AddEmployee()
{
    Employee e1;

    cout<< "Enter ID : " ;
    cin >> e1.id;
    cout<< "Enter Name : " ;
    cin >> e1.name;
    cout<< "Enter Salary : " ;
    cin >> e1.salary;

    list[TopOfStack] = e1;
    TopOfStack++;
}

void EditEmployee()
{
    Employee e1;

    cout<< "Enter ID : " ;
    cin >> e1.id;
    cout<< "Enter Name : " ;
    cin >> e1.name;
    cout<< "Enter Salary : " ;
    cin >> e1.salary;

    list[TopOfStack-1] = e1;
}

int main()
{
    system("cls");
    ShowMenu();

    cout<< "Enter Your Option : ";
    int Option;
    cin>> Option;
    switch(Option)
    {
    case Add:
    {
        AddEmployee();
        main();
    }
    break;
    case Edit:
    {
        EditEmployee();
        main();
    }
    break;
    case Delete:
    {
        --TopOfStack;
        main();
    }
    break;
    case Show:
    {
        Employee e1 = list[--TopOfStack];
        ShowEmployee(&e1);

    }
    break;
    case All:
    {
        for(int i=0; i<TopOfStack; i++)// top=3
        {
            Employee e1 = list[i]; // 0=e1, 1=e2, 2=e3

            ShowEmployee(&e1);
        }
    }
    break;
    case Exit:
        return 0;

    default:
        main();
    }
    return 0;
}
