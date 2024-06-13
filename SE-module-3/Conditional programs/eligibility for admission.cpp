#include <stdio.h>

int main() {
    int physics, chemistry, mathematics, total, total_maths_physics;
    printf("Input the marks obtained in Physics: ");
    scanf("%d", &physics);
    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &chemistry);
    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &mathematics);
    printf("Total marks of Maths, Physics, and Chemistry: ");
    scanf("%d", &total);
    printf("Total marks of Maths and Physics: ");
    scanf("%d", &total_maths_physics);

    if (physics >= 55 && chemistry >= 50 && mathematics >= 65 && total >= 190) {
        printf("The candidate is eligible.\n");
    } 
	else if (total_maths_physics >= 140) 
	{
        printf("The candidate is eligible.\n");
    } 
	else 
	{
        printf("The candidate is not eligible.\n");
    }

    return 0;
}

