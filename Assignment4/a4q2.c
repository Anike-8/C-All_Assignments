#include<stdio.h>
#include <math.h>
int pow_num (int x, int y);
int main ()
{
    int base, exp;
    printf (" Enter the base value: ");
    scanf (" %d", &base); 

    printf (" Enter the power value: ");
    scanf (" %d", &exp); 

    printf (" %d ", pow_num (base, exp));
}

int pow_num (int x, int y)
{
    int power = 1, i; 
	for (i = 1; i <= y; ++i)
    {
        power = power * x;

    }
    return power;
}
