#include <iostream>

using namespace std;

enum options
{
    ADD= 1,
    EDIT= 2,
    DELETE= 3,
    SHOW= 4,
    SHOW_ALL= 5,
    EXIT= 6
};


enum cls
{
    clearAndPrint,
    notPrint= 2
};

struct Employee
{
    int id;
    char name[250];
    float salary;
};


Employee emp;

Employee employees[10];
int topOfStack= -1;

void showMenu(){
    cout << "1: Add \n"
    << "2: Edit \n"
    << "3: Delete \n"
    << "4: Show \n"
    << "5: Show All \n"
    << "6: Exit \n";
}

void printEmp(Employee *emp)
{
    cout << "ID : " << emp->id << " , Name: "<< emp->name << " , Salary:  "<< emp->salary << endl;
}

struct Employee readEmp(){
    cout << "Enter ID: ";
    cin >> emp.id;
    cout << "Enter Name: ";
    cin >> emp.name;
    cout << "Enter salary: ";
    cin >> emp.salary;
    return emp;
}

void addEmp(){
    employees[++topOfStack] = readEmp();
}

void editEmp(){
    employees[topOfStack] = readEmp();
}

void showEmp(){
    if(topOfStack<0){
        cout <<"empty \n";
    }else{
       printEmp(&employees[topOfStack]);
    }
}

void showAllEmp(){
    if(topOfStack<0){
        cout <<"empty \n";
    }else{
        for(int i=0; i<=topOfStack; i++)
        {
            printEmp(&employees[i]);
        }
    }
    cout <<"\n----------------------- \n";
}

int main(int cls)
{
    /**
        int *option = new int(10);
        cout << *option;
        delete(option);
    */
    int option = 0;

    if(cls==clearAndPrint ){
        system("cls");
    }

    if(cls !=notPrint || cls==clearAndPrint){
        showMenu();
    }

    cout << "Enter Your Option: ";
    cin >> option;


    switch(option)
    {
        case ADD:
            addEmp();
            break;

        case EDIT:
            editEmp();
            break;

        case DELETE:
            if(topOfStack>=0)
                topOfStack--;
            break;

        case SHOW:
            showEmp();
            main(notPrint);
            break;

        case SHOW_ALL:
            showAllEmp();
            main(notPrint);
            break;

        case EXIT:
            return 0;
            exit(0);
            break;
    }

    main(clearAndPrint);
    return 0;
}
