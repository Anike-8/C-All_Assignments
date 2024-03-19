//8. Write a program to accept three integer numbers and find its average.
#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the 1st no=>");
	scanf("%d",&a);
	printf("Enter The 2nd No=>");
	scanf("%d",&b);
	printf("Enter The 3rd No=>");
	scanf("%d",&c);

	d=a+b+c;
	d/=3;
	printf("here is average of given no =>%d",d);
	
	return 0;


}
