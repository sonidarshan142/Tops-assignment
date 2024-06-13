#include <stdio.h>
int main() 
{
    char fname[50], mname[50], lname[50];

    printf("Enter the First Name, Middle Name, and Last Name:\n");
    scanf("%s %s %s", fname, mname, lname);

    printf("Abbreviated Name: %c. %c. %s\n", fname[0], mname[0], lname);
    return 0;
}

