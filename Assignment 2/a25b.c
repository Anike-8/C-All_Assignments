#include<stdio.h>
int main()
{

	int n1 , n2  , n3 , max;
	printf("Enter the n1=>\n" );
	scanf("%d",&n1);

	printf("Enter the n2=>\n");
	scanf("%d",&n2);

	printf("enter the no3=>");
	scanf("%d",&n3);

	max = (n1 > n2)? ((n1 > n3)? n1 : n3) : ((n2 > n3)? n2 : n3) ;


	printf(" Max = %d \n",max);
	return 0;


}
