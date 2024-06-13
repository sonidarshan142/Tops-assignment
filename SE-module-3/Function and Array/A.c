//information -print and display empno, empname, address 
//and age
#include <stdio.h>
struct Employee 
{
    int empno;
    char empname[100];
    char address[200];
    int age;
};

void printEmployee(struct Employee emp) 
{
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}

int main() 
{
    struct Employee emp;
    printf("Enter employee number: ");
    scanf("%d", &emp.empno);
    getchar();

    printf("Enter employee name: ");
    fgets(emp.empname, sizeof(emp.empname), stdin);
    emp.empname[strcspn(emp.empname, "\n")] = 0;

    printf("Enter address: ");
    fgets(emp.address, sizeof(emp.address), stdin);
    emp.address[strcspn(emp.address, "\n")] = 0;

    printf("Enter age: ");
    scanf("%d", &emp.age);
    printEmployee(emp);

    return 0;
}

