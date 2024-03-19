#include<stdio.h>
int main()
{
	int year;
	printf("enter the year");
	scanf("%d",&year);

	if(year%4==0 && year%100!=0)
	{
		printf("Its leap year");

	}
	else if(year%400==0)
	{
		printf("Its leap year");

	}
	else
		printf("Its not leap year");

	printf("---------------------------------------\n");
	printf("-----Using LOgical operator--------\n");

	if((year%4==0 && year%100!=0) || year%400==0)
	{
		printf("Its leap year");
	}
	else
	{
		printf("Its Not leap year");
	}


	return 0;
}
