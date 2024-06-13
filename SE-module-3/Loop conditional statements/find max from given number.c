//Write a program to find out the max from given number
#include<stdio.h>
int main()
{
	int num,maxdigit=0;
	printf("enter number: ");
	scanf("%d", &num);
	
	num=(num<0)? -num : num;
	
	while (num>0){
		int digit=num%10;
		if(digit>maxdigit){
			maxdigit=digit;
		}
		num/=10;
	}
	printf("maximum digit in the given number is : %d\n",maxdigit);
	
	return 0;
}
