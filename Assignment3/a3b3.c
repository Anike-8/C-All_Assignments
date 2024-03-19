#include<stdio.h>
int main()
{
	int base,power=1,index;

	printf("Enter the no as base=>\n");
	scanf("%d",&base);

	printf("Enter the no as index=>");
	scanf("%d",&index);

	for (int i=1;i<=index;i++)
	{
		power=power*base;
	}
	printf("%d ",power);

	return 0;
}

