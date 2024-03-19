
#include <stdio.h>



int main()
{
	int R = 0,C = 0,I = 0,J =0;

	printf("\n Enter Row And Colum Size => ");
	scanf("%d",&R);
	printf("\n enter the size of column=>");
	scanf("%d",&C);

	printf("\n\t Given Pattern Is => \n\n ");

	for(I = 1 ; I <= R ; I++)
	{
		for(J = 1; J <= C ; J++)
		
		{
			if(I == R||J == C|| I == 1 || J == 1)
			{
				printf(" * ");
			}
			else 
			{
				printf(" * ");
			}
		}

		printf (" \n ");

	}
 
    for (I = 0; I < R; I++) { 
  
      
        for (int J = 0; J <= I; J++) { 
            printf("* "); 
        } 
        printf("\n"); 
    }


printf("\n\n");
 for (int I = 0; I < R; I++) { 
  
          for (int J = 0; J < 2 * I; J++) { 
            printf(" "); 
        } 
  
        for (int K = 0; K < R - I; K++) { 
            printf("* "); 
        } 
        printf("\n"); 
    } 
printf("\n\n");
 int n = 5; 

    for (I = n; I  >= 1; I--) {
        
        for (int J = I; J >= 1; J--) {
            printf("%d ", J);
        }

       
        printf("\n");
    }


printf("\n\n");

      for (J = 2; J  <= I; J++) {
            printf("%d ", J);
      }
printf("\n\n\n");

     int i,j,k=1;

    printf("Triangle of alphabetes\n");
    for(i=1;i<5;i++)
    {
        for(j=1;j<=i;j++,k++)
        {
            printf("%4c",(char)(k+64));
        }
        printf("\n");
    }


printf("triangle of alphabtes\n\n\n");















	return 0;
}
