#include <stdio.h>
float rectangleArea(float width, float length) 
{
    return width * length;
}

int main() 
{
    float width, length, area;
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    area = rectangleArea(width, length);
    
    printf("Area of the rectangle with width %.2f units and length %.2f units is: %.2f square units\n", width, length, area);
    
    return 0;
}

