#include<stdio.h>
int main()
{
	int n1,n2,div;
	printf("\n enter a number");
	scanf("%d",&n1);
	printf("\n enter two number");
	scanf("%d",&n2);
	if(n2==0)
	{
		printf("\n cant divide by zero");
	}
	else
	{
		div=n1/n2;
		printf("\n division is %d",div);
	}
	return 0;
}

