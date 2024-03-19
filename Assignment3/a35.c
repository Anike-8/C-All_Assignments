#include<stdio.h>

int main()
{
	int no,fact=1;


	printf("Enter the no=>");
	scanf("%d",&no);

	int temp=no;

	while(temp>1)
	{
	fact=fact*temp;
	temp--;
	}

	printf("Factorial of %d=%d",no,fact);

 return 0;
}

