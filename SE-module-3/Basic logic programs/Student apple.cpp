#include <stdio.h>

int main() {
    int Students;
    printf("Enter the number of students: ");
    scanf("%d", &Students);
    int totalApples = Students * 5;
    printf("Total number of apples required: %d\n", totalApples);
    
    return 0;
}

