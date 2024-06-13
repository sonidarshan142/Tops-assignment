//WAP to print number in reverse order 
#include<stdio.h>
int main()
{
	int no,rno=0,re;
	printf("Enter number");
	scanf("%d",&no);
	
	while(no !=0)
	{
	re=no%10;
	rno = rno*10+re;
	no /=10;
	}
	printf("reversed number is:%d\n",rno);
	
	return 0;
		
}
