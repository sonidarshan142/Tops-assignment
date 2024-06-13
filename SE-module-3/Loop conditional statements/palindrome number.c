//Accept 3 numbers from user using while loop and check each numbers 
//palindrome
#include<stdio.h>
int main()
{
	int num,originalnum,revno,remainder;
	int i=0;
	while(i<3){
		printf("enter number");
		scanf("%d", &num);
		originalnum = num;
		revno = 0;
		
		while (num !=0){
			remainder = num%10;
			revno=revno* 10 + remainder;
			num /=10;
		}
		
		if(originalnum==revno){
			printf("%d is a palindrome.\n", originalnum);
		}
		else{
			printf("%d is not a palindrome.\n",originalnum);
		}
		i++;
	}
	
	return 0;
}
