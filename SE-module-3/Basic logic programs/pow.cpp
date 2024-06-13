#include<stdio.h>
#include<math.h>
int main()
{
	int no1,n,p;

	printf("enter number and power");
	scanf("%d%d",&n,&p);
	int ans=pow(n,p);
	printf("%d",ans);
	
	return 0;
}
