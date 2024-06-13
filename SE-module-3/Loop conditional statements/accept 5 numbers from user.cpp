//WAP to accept 5 numbers from user and display all numbers
#include <stdio.h>
int main() 
{
    int i,f,num,j;
    
    for(i=0;i<5;i++)
    {
    	printf("Enter number : ");
    	scanf("%d",&num);
    	
    	f=1;
    	for(j=1;j<=num;j++)
    	{
    		f= f*j;
		}
		printf("Factorial of %d is : %d\n\n",num,f);
	}
	return 0;
}
    

