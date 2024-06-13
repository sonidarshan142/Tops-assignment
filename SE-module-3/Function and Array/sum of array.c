//Accept 5 numbers from user and perform sum of array
#include <stdio.h>
int main() 
{
    int arr[5];
    int i, sum = 0;
    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++) 
	{
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 5; i++) 
	{
        sum += arr[i];
    }
    printf("The sum of the array elements is: %d\n", sum);

    return 0;
}

