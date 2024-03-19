#include<stdio.h>  
int main()   
{   
    char operator;
    float num1, num2, result;
 
    printf("Enter firrst number operaor second number[ENTER]:");
    printf("\nExample:  10+20[Enter]: ");
     scanf("%f%c%f", &num1,&operator,&num2);

	if( operator=='+')
	  {
	   result= num1+num2;
	   printf("Addition=%.2f",result);
       }
	else if (operator =='-') 
	   {
	   result = num1- num2;
	   printf("Subtraction=%.2f",result);
       }
	else if (operator =='*') 
	   {
	   result = num1 * num2;
	   printf("Multiplication=%.2f",result);
       }
	else if (operator =='/') 
	   {
	   result = num1 / num2;
	   printf("Division=%.2f",result);
       }
	 else
	   printf("Invalid operator please input +, -, *, / ") ;
	 return 0;
}
