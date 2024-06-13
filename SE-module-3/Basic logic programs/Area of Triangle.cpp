#include <stdio.h>
float triangleArea(float base, float height) 
{
    return 0.5 * base * height;
}

int main()
 {
    float base, height, area;
    
    printf("Enter the base length of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);
    
    area = triangleArea(base, height);
    printf("Area of the triangle with base %.2f and height %.2f is: %.2f square \n", base, height, area);
    
    return 0;
}

