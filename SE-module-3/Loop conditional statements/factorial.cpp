//print factorial of given number
#include <stdio.h> 

int  main()
{
  int i, f, num=0;

  printf("Input the number : ");  
  scanf("%d", &num);  

  for(i = 1; i <= num; i++)  
      f = f*i;  

  printf("The Factorial of %d is: %d\n", num, f); 
   return 0;  
}

