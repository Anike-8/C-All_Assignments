#include<stdio.h>

int main()
{
	int i = 1,no,temp;
	printf("Enter the no");
	scanf("%d",&no);

	while( i <= 10 )
	{	

		temp=no*i;
		printf("%d*%d=%d\n",no,i,temp);
		i++;
	}

}
