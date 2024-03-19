#include<stdio.h>

int main()
{	
int no,i;
char ch;
ch='*';
printf("Enter the characterthe which want to print");
scanf("%c",&ch);
printf("Enter the no how many time you want to print the character");
scanf("%d",&no);
	
	while( i <= 6 )
	{
		printf("%c\t",ch);
		i++;
	}

}
