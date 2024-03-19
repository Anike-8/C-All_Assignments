#include <stdio.h>
 
int main()
{
  int Number, i = 1; 

  printf("\n Please Enter number to Find Factors\n");
  scanf("%d", &Number);
 
  printf("\n The Factors of a Number are:\n");
  while (i < Number)
   {
     if(Number%i == 0)
      {
        printf("%d   %   (%d) =%d\n",Number,i,Number);  
      }
    i++;
   }

  return 0;
}
