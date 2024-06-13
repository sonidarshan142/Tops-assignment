//Write a program in C to remove characters from a string except alphabets.
#include <stdio.h>
#include <string.h>

int main()
{
  char str[100], strAlphas[100];
  int i, j;

  char temp;

  printf("Enter A String to Remove Non-Alphabets = ");
  fgets(str, sizeof str, stdin);

  int len = strlen(str) - 1;

  for (i = 0, j = 0; i < len; i++)
  {
    if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
    {
      strAlphas[j] = str[i];
      j++;
    }
  }
  strAlphas[j] = '\0';
  printf("\nBefore removing Non-Alphabets = %s\n", str);
  printf("After removing Non-Alphabets   = %s\n", strAlphas);
}
