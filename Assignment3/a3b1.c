#include<stdio.h>
 int main()
 {
	int i, no,res;

	printf("Enter the given no\n");
	scanf("%d",&no);
	
	for( i=1;i<=10;i++)
	{
		res=no*i;
		printf("%d * %d=%d\n",no,i,res);

	}		

	return 0; 

 }
