//.Calculate sum of 10 numbers using of while loop
#include <stdio.h>
int main() 
{
    int i = 1,sum = 0,num;
    printf("Enter 10 numbers:\n");

    while (i <= 10) 
	{
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
        i++;
    }
    printf("The sum of the 10 numbers is: %d\n", sum);

    return 0;
}

