#include <stdio.h>

int main() 
{
    int years, days;
    printf("Enter number of years: ");
    scanf("%d", &years);
    days = years * 365;
    printf("%d years is equal to %d days.\n", years, days);
    printf("Enter number of days: ");
    
    scanf("%d", &days);
    years = days / 365;
    
    printf("%d days is equal to %d years.\n", days, years);

    return 0;
}

