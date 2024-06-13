#include <stdio.h>

int main() 
{
    float marks;
    printf("Enter marks: ");
    scanf("%f", &marks);

    if (marks >= 33) 
	{
        printf("You have passed.\n");
    } 
	else 
	{
        printf("you have failed.\n");
    }

    return 0;
}

