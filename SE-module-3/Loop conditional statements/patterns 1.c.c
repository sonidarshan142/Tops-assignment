//1
//10
//101
//1010
//10101
#include<stdio.h>
int main()
{
    int i, j, n;
    printf("Enter number: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2==1)
            {
            	printf("1");
			}else{
				printf("0");
			}
		}
		printf("\n");
	}
	return 0;
}

//i=1 1<=5
//j=1 1<=1 print 1 i++ i=2

//i=1 2<=5
//j=2 2<=2 print 1 0 i++ i=3

//i=1 3<=5
//j=3 3<=5 print 1 0 1 i++ i=4

//i=1 4<=5
//j=4 4<=5 print 1 0 1 0 i++ i=5

//i=1 5<=5
//j=5 5<=5 print 1 0 1 0 1 i++ 
