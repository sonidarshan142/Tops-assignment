#include <stdio.h>
int main()
{
    int month;
    printf("Enter month number (1-12): ");
    scanf("%d", & month);

    if(month == 1)
    {
        printf("January");
    }
    else if(month == 2)
    {
        printf("Feb");
    }
    else if(month == 3)
    {
        printf("March");
    }
    else if(month == 4)
    {
        printf("April");
    }
    else if(month == 5)
    {
        printf("May");
    }
    else if(month == 6)
    {
        printf("June");
    }
    else if(month == 7)
    {
        printf("July");
    }
    else if(month == 8)
    {
        printf("Aug");
    }
    else if(month == 9)
    {
        printf("Sept");
    }
    else if(month == 10)
    {
        printf("Oct");
    }
    else if(month == 11)
    {
        printf("Nov");
    }
    else if(month == 12)
    {
    	printf("Dec");
	}
    else
    {
        printf("Invalid Input! Please enter month number between 1-12.");
    }

    
    return 0;
}
