#include <stdio.h>

int main() {
    float salary, premium;
    printf("Enter your salary: ");
    scanf("%f", &salary);
    if (salary < 50000) 
	{
        premium = 0.02 * salary;
    } else if (salary >= 20000 && salary < 50000) 
	{
        premium = 0.05 * salary;
    } 
	else 
	{
        premium = 0.1 * salary;
    }
    printf("Your insurance premium is: %.2f\n", premium);

    return 0;
}

