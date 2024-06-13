#include <stdio.h>
float triangleParameter(float side1, float side2, float side3) 
{
    return side1 + side2 + side3;
}

int main() 
{
    float side1, side2, side3, parameter;
    
    printf("Enter the length of side 1 of the triangle: ");
    scanf("%f", &side1);
    printf("Enter the length of side 2 of the triangle: ");
    scanf("%f", &side2);
    printf("Enter the length of side 3 of the triangle: ");
    scanf("%f", &side3);
    parameter = triangleParameter(side1, side2, side3);
    printf("Parameter of the triangle with side lengths %.2f, %.2f, and %.2f units is: %.2f units\n", side1, side2, side3, parameter);
    
    return 0;
}

