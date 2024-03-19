//Print the ASCII value of user entered character in decimal, hex, octal format and also print the character for user entered ASCII value.
#include<stdio.h>
int main()
{
	char c;

	printf("Enter the character=>");
	scanf("%c",&c);

	printf("print the acsii value %d\n",c);
	
	printf("print the hex  value %X\n",c);
	printf("print the Octal  value %o\n",c);
	printf("print the Character value %c\n",c);
	
	
	
	
	return 0;
}
