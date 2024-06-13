#include<stdio.h>
struct employee1{
	int id;
	char name[100];
};

union employee2{
	int id;
	char name[100];
};

int main()
{
	struct employee1 s_emp;
	union employee2 u_emp;
	
	printf("%d is size of structure",sizeof(s_emp));
	
	printf("\n %d is size of union",sizeof(u_emp));
	
	return 0;	
}
