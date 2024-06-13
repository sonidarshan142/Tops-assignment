#include <stdio.h>
float calculateCircumference(float a) 
{
    return 4 * a;
}

int main() 
{
    float sideLength;
    printf("Enter the length of one side of the rectangle: ");
    scanf("%f", &sideLength);
    float circumference = calculateCircumference(sideLength);
    printf("Circumference of the rectangle: %.2f\n", circumference);
    
    return 0;
}

