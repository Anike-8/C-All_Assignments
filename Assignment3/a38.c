

#include <stdio.h>

int main()
{
    int i, j, num, result;
    printf("Enter any number to print Prime factors: ");
    scanf("%d", &num);

    printf("All Prime Factors of %d are: \n", num);

 
    for(i=2; i<=num; i++)
    {
    
        if(num%i==0)
        {
         
            result = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    result = 0;
                    break;
                }
            }
            if(result==1)
            {
                printf("%d, ", i);
            }
        }
    }

    return 0;
}
