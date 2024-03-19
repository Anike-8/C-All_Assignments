#include<stdio.h>
int main()
{
	char ch;

	printf("\n to check given character is,digit or symbol=");
	scanf("%c",&ch);

	if((ch>=65)&&(ch<=97))
	{
		printf("\n given character is Uppercase character=%c",ch);
	}
	else if((ch>=97)&&(ch<=122))
	{
		printf("\n given character is lowercase character=%c",ch);
	}
	else if((ch>=48)&&(ch<=57))
	{
		printf("\n given character is digit=%c",ch);
	}
	else if((ch==10))
	{
		printf("\n given character is space=%c",ch);
	}
	else if(ch==9)
	{
		printf("\n Given Character is tab=%c",ch);
	}
	else if(ch==13)
	{
		printf("Given Character is carriege return=%c",ch);
	}
	else if(ch==10)
	{
		printf("Given Character  is enter=%c",ch);
	}
	else
		printf("Given character is not listed above=%c",ch);

	return 0;
}

