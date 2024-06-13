#include <stdio.h>

int main() 
{
    float height_cm;
    printf("Enter height in centimeters: ");
    scanf("%f", &height_cm);

    if (height_cm < 150) 
	{
        printf("Person is Short.\n");
    } else if (height_cm >= 150 && height_cm < 170) 
	{
        printf("Person is Average height.\n");
    } else if (height_cm >= 170 && height_cm < 190) 
	{
        printf("Person is Tall.\n");
    } else 
	{
        printf("Person is Very Tall.\n");
    }

    return 0;
}

