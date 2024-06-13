//C Program to Reverse a Number Using FOR Loop
#include <stdio.h>
int main() 
{
    int num, reversedNumber = 0, remainder, temp;

    printf("Enter a number : ");
    scanf("%d", &num);
    for (temp = num; temp != 0; temp /= 10) {
        remainder = temp % 10;
        reversedNumber = reversedNumber * 10 + remainder;
    }
    printf("The reverse of %d is %d\n", num, reversedNumber);

    return 0;
}

