//Write a program in C to find the maximum number of characters in a string.
#include <stdio.h>
int main() 
{
    char str[100];
    int i;
    int maxCount = 0;
    char maxChar;
    int count[256] = {0};

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) 
	{
        count[(unsigned char)str[i]]++;
    }

    for (i = 0; i < 256; i++) 
	{
        if (count[i] > maxCount) 
		{
            maxCount = count[i];
            maxChar = (char)i;
        }
    }

    if (maxCount > 0) 
	{
        printf("The maximum occurring character is '%c' with a count of %d.\n", maxChar, maxCount);
    } else {
        printf("The string is empty.\n");
    }

    return 0;
}


