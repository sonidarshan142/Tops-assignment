#include<stdio.h>
int main()
{
	int num1, num2, num3, min;
	printf("Enter three numbers: ");
	scanf("%d%d%d",&num1,&num2,&num3);
	min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);
    printf("Minimum number %d, %d, and %d is: %d\n", num1, num2, num3, min);

    return 0;
}
