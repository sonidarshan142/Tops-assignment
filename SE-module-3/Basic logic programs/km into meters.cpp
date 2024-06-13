#include <stdio.h>

int main() 
{
    float km, meters;
    printf("Enter distance in km: ");
    scanf("%f", &km);
    meters = km * 1000;
    printf("Distance in meters: %.2f\n", meters);

    return 0;
}

