#include <stdio.h>
float squareParameter(float side) 
{
    return 4 * side;
}

int main() 
{
    float side, parameter;
    printf("Enter the length of the side of the square: ");
    scanf("%f", &side);
    parameter = squareParameter(side);
    printf("Parameter of the square with side length %.2f units is: %.2f units\n", side, parameter);
    
    return 0;
}

