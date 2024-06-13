//Calculate 5 numbers from user and calculate number of even and odd using 
//of while loop
#include <stdio.h>
int main() 
{
    int num, evenCount = 0, oddCount = 0;
    int i = 1;

    printf("Enter 5 numbers:\n");

    while (i <= 5) 
	{
        printf("Number %d: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) 
		{
            evenCount++;
        } 
		else 
		{
            oddCount++;
        }

        i++;
    }

    printf("\nNumber of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);

    return 0;
}


