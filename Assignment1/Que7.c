#include<stdio.h>
int main()
{
	int num=9361,a,b,c,d,temp;
	temp=num;

	a=num%10;
	num=num/10;
	b=num%10;
	num=num/10;
	c=num%10;
	num=num/10;
	d=num%10;
	num=num/10;
	printf("%d  %d  %d  %d\n ",d,c,b,a);


	printf("%d  %d  %d   %d\n",d*1000,c*100,b*10,a);

	printf("%d%d%d%d",a,b,c,d);



}
