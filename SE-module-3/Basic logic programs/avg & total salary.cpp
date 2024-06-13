#include<stdio.h>
int  main()
{
	int emp1,emp2,emp3,emp4,emp5,avg,total;
	printf("enter salary of 5 employes");
	scanf("%d%d%d%d%d",&emp1,&emp2,&emp3,&emp4,&emp5);
	total=emp1+emp2+emp3+emp4+emp5;
	avg=total/5;
	printf("total salary is %d and average salary is %d",total,avg);
	return 0;
}
