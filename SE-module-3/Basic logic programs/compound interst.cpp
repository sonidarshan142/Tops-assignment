#include <stdio.h>
#include <math.h>
int main()
{
    float amount, rate, time, CI;

    printf("Enter amount: ");
    scanf("%f", &amount);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter rate: ");
    scanf("%f", &rate);

    CI = amount* (pow((1 + rate / 100), time));
    printf("Compound Interest = %f", CI);

    return 0;
}
