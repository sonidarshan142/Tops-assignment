#include <stdio.h>

int main() {
    int years, months, days;
    printf("Enter number of years: ");
    scanf("%d", &years);
    months = years * 12;
    days = months * 30;
    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Days: %d\n", days);

    return 0;
}

