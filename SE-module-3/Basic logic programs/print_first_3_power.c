#include<stdio.h>
int main()
{
	int num;
	
	printf("enter an integer: ");
	scanf("%d",&num);
	
	printf("first Three powers of %d: \n",num);
	printf("%d^1 = %d\n",num, num);
	printf("%d^2 = %d\n",num, num*num);
	printf("%d^3 = %d\n",num, num*num*num);
	
	return 0;
}
