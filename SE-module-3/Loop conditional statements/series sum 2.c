//(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include <stdio.h>
int main() 
{
    int i, t, n, sum;
    printf("Please enter an integer, n = ");
    scanf("%d", &n);
    t = sum = 0;
    for (i = 1; i <= n; ++i) 
	{
        t += i;
        sum += t;
    }
    printf("sum = %d\n", sum);
    return 0;
}
