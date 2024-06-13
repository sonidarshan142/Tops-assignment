#include <stdio.h>
int main() 
{
    float salary, insurance, loan, remaining_salary;
    printf("Enter your monthly salary: ");
    scanf("%f", &salary);

    insurance = salary * 0.1;
    printf("Insurance premium deducted: %.2f\n", insurance);

    remaining_salary = salary - insurance;
    loan = remaining_salary * 0.1;
    printf("Loan installment deducted: %.2f\n", loan);

    remaining_salary -= loan;
    printf("Remaining salary after deductions: %.2f\n", remaining_salary);

    return 0;
}

