//Write a program in C to print individual characters of a string in reverse order
#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    int length, i;
    printf("Input the string: ");
    fgets(str, sizeof(str), stdin);

    length = strlen(str);

    printf("The characters of the string in reverse are:\n");
    for (i = length - 1; i >= 0; i--) 
	{
        printf("%c ", str[i]);
    }
    printf("\n");

    return 0;
}

