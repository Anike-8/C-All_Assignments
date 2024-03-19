
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


	return 0;
}
