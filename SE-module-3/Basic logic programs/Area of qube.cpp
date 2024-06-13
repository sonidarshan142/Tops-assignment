#include <stdio.h>
float cubeArea(float side)
 {
    return 6 * side * side;
}

int main() 
{
    float side, area;
    printf("Enter the length of the side of the cube: ");
    scanf("%f", &side);
    area = cubeArea(side);
    printf("Area of the cube with side %.2f units is: %.2f square units\n", side, area);
    
    return 0;
}

