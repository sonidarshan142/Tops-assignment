#include <stdio.h>

int main() {
    float side, area;

    printf("Enter the length of a side of the square: ");
    scanf("%f", &side);
    area = side * side;
    printf("Area of the square with side length %.2f is: %.2f\n", side, area);

    return 0;
}

