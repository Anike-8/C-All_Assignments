#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("\n enter three number\n");

	printf("Enter the n1=>");
	scanf("%d",&n1);

	printf("Enter the n2=>");
	scanf("%d",&n2);

	printf("Enter the n3=>");
	scanf("%d",&n3);

	 if(n3>n1||n3>n2)
    {
 		printf("%d is greter than n1 and n2\n",n3);
    }

	else if(n1>n2||n1>n3)
	{
		printf("%d is gretater than n2 an n3\n",n1);
	}

	else if(n2>n3||n2>n1)
	{
		printf("%d is greter than n1 and n3",n2);
	}
		return 0;

}
