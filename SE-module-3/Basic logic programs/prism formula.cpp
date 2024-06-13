#include <stdio.h>
float calculateArea(float w, float l, float h) 
{
    float area;
    area = 2 * (w * l + h * l + h * w);
    return area;
}

int main() 
{
    float width, length, height, area;
    printf("Enter the width, length, and height of the rectangular prism: ");
    scanf("%f %f %f", &width, &length, &height);
    area = calculateArea(width, length, height);

    printf("The area of the rectangular prism is: %.2f\n", area);

    return 0;
}

