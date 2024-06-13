//A
//A B
//A B C
//A B C D
//A B C D E
#include <stdio.h> 
int main() 
{ 
    int row,j; 
    for (row='A'; row<='E';row++) 
	{ 
        for (j='A'; j <= row; j++)
		{ 
            printf("%c",j); 
        } 
        printf("\n"); 
    } 
    return 0; 
}


