#include <stdio.h>
#include <stdlib.h>

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

typedef enum options options;
typedef enum cls cls;
typedef struct Employee Employee;
Employee emp;

Employee employees[10];
int topOfStack= -1;

void showMenu(){
    printf("1: Add \n");
    printf("2: Edit \n");
    printf("3: Delete \n");
    printf("4: Show \n");
    printf("5: Show All \n");
    printf("6: Exit \n");
}

void printEmp(Employee *emp)
{
    printf("ID : %i , Name: %s, Salary: %f \n", emp->id, emp->name, emp->salary);
}

struct Employee readEmp(){
    printf("Enter ID: ");
    scanf("%i", &emp.id);
    printf("Enter Name: ");
    scanf("%s", emp.name);
    printf("Enter salary: ");
    scanf("%f", &emp.salary);
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
        printf("empty \n");
    }else{
       printEmp(&employees[topOfStack]);
    }
}

void showAllEmp(){
    if(topOfStack<0){
        printf("empty \n");
    }else{
        for(int i=0; i<=topOfStack; i++)
        {
            printEmp(&employees[i]);
        }
    }
    printf("\n---------------------------------\n");
}

int main(int cls)
{
    /**
        int *option = (int*) malloc(sizeof(int)*2);
        *option = 10;
        printf("%i", *option);
        free(option);
    */

    int option = 0;

    if(cls==clearAndPrint ){
        system("cls");
    }

    if(cls !=notPrint || cls==clearAndPrint){
        showMenu();
    }

    printf("Enter Your Option: ");
    scanf("%i", &option);


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
            exit;
            break;
    }

    main(clearAndPrint);
    return 0;
}
