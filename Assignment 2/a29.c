#include <stdio.h>

int main()
{
    int month, year,days=28;

    printf("Enter the month=> ");
    scanf("%d", &month);
    printf("Enter the year=>");
    scanf("%d", &year);

    if (month < 1 || month > 12) 
	{
        printf("Invalid month\n");
        return 1;
    }
    if (month == 2) 
	{
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("Number of days %ddays:\n",days+1);
        } else {
            printf("Number of days%d:\n",days);
        }
    }

    else if (month == 4 || month == 6 || month == 9 || month == 11) 
	{
        printf("In this month there  are %d days\n",days+2);
    }
   
    else 
	{
        printf("there are %d days in %d month %d year\n",days+3,month,year);
    }


printf("--------------------------------------------------------------------");


























    return 0;
}

