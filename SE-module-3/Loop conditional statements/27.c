#include <stdio.h>
int main() 
{
   double i, n,sum;
    printf("Enter value :");
    scanf("%lf",&n);
    
    for (i = 1; i <= n; i++) {
        if ((int)i % 2 == 0) {
            
            printf(" - %0.0lf / %0.0lf", i, i + 1);
        } else {
            
            if (i == 1) {
                printf("%0.0lf / %0.0lf", i, i + 1);  
            } else {
                printf(" + %0.0lf / %0.0lf", i, i + 1);
            }
        }
    }
   

    
   printf(" = ");
   
    
    
    for(i=1;i<=n;i++)
    {
        if ((int)i%2==1)
            sum+=i/(i+1);
        else
            sum-=i/(i+1);
    }
    printf("Sum: %lf",sum);
    return 0;
}

