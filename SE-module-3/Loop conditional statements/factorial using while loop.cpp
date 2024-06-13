//calculate the Factorial of a Given Number using while loop
#include <stdio.h>
int main()
{
    int i = 1,f = 1,n;
    printf("Enter a Number to Find Factorial: ");
    scanf("%d",&n);
    while(i<=n)
    {
        f *= i;
        i++;
    }
    printf("The Factorial of %d is %d",n,f);
    
    return 0;
}


