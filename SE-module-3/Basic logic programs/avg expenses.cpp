#include<stdio.h>
int main()
{
	int exp1,exp2,exp3,exp4,exp5,total,avg;
	printf("enter expenses of 5 users");
	scanf("%d%d%d%d%d",&exp1,&exp2,&exp3,&exp4,&exp5);
	total=exp1+exp2+exp3+exp4+exp5;
	avg=total/5;
	printf("total expenses is %d and avg expenses is %d",total,avg);
	
	return 0;
}
