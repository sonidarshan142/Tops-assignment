#include <stdio.h>
int main() 
{
    int minutes, hours, seconds;

    printf("Enter number of minutes: ");
    scanf("%d", &minutes);
    hours = minutes / 60;
    seconds = minutes * 60;
    printf("Hours: %d\n", hours);
    printf("Seconds: %d\n", seconds);

    return 0;
}

