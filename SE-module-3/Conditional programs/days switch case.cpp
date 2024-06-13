#include <stdio.h>
int main()
{
	printf("\n Week days");
	int day;
	printf("\n Enter your choice :");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
			printf("\nMonday");
			break;
		case 2:
			printf("\nTuesday");
			break;
		case 3:
			printf("\nWednesday");
			break;
		case 4:
			printf("\nThrusday");
			break;
		case 5:
			printf("\nFriday");
			break;
		case 6:
			printf("\nSaturday");
			break;
		case 7:
		printf("\nSunday");
			break;
		defalut :
			printf("\nyour choice is invalid");	
	}
	return 0;
}
