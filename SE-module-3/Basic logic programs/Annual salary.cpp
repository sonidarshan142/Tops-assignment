#include <stdio.h>

int main() 
{
    float monthly_salary, annual_salary;
    printf("Enter your monthly salary: ");
    scanf("%f", &monthly_salary);
    annual_salary = 12 * monthly_salary;
    printf("Your annual salary is: %.2f\n", annual_salary);

    return 0;
}

