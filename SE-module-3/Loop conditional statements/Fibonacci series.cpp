// print Fibonacci series up to given numbers
#include <stdio.h>
int main() 
{
    int n, n1 = 0, n2 = 1, nextNum;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; ++i) 
	{
        printf("%d, ", n1);
        nextNum = n1 + n2;
        n1 = n2;
        n2 = nextNum;
    }

    return 0;
}
