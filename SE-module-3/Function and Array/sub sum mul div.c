//WAP of Addition, Subtraction, Multiplication and Division using Switch 
//case.(Must Be Menu Driven)
#include <stdio.h>
void addition() 
{
    float num1, num2, result;
    printf("Enter two numbers to add: ");
    scanf("%f %f", &num1, &num2);
    result = num1 + num2;
    printf("The result is: %.2f\n", result);
}

void subtraction() 
{
    float num1, num2, result;
    printf("Enter two numbers to subtract: ");
    scanf("%f %f", &num1, &num2);
    result = num1 - num2;
    printf("The result is: %.2f\n", result);
}

void multiplication() 
{
    float num1, num2, result;
    printf("Enter two numbers to multiply: ");
    scanf("%f %f", &num1, &num2);
    result = num1 * num2;
    printf("The result is: %.2f\n", result);
}

void division() 
{
    float num1, num2, result;
    printf("Enter two numbers to divide: ");
    scanf("%f %f", &num1, &num2);
    if (num2 != 0) {
        result = num1 / num2;
        printf("The result is: %.2f\n", result);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

int main() 
{
    int choice;
    
    while (1) 
	{
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    
    return 0;
}

