#include<stdio.h>

int main()
{
   
    int n,i = 3, count, no;

    printf("\n how many prime numbers are required :  ");
    scanf("%d", &n);

   
    for(count = 2; count <= n; i++)  
    {
      
		for(no = 2; no <= i; no++)
        {
            if(i%no == 0)
                break;
        }

        if(no== i) 
        {
            printf("%d ", i);
            count++;    // increment the count of prime numbers
        }

    }
    return 0;
}
