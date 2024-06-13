//1/2 - 2/3 + 3/4 - 4/5 + 5/6 - ...... n
#include <stdio.h>
int main() 
{
    int n;
    double sum = 0.0, i;

    printf("Enter the numbers: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
	{
        if ((int)i % 2 == 0)
            sum -= i / (i + 1);
        else
            sum += i / (i + 1);
    }

    printf("The sum of the series = %.2lf\n", sum);
    
    
    return 0;
}

