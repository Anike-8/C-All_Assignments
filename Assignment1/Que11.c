/*char
1
%c
-128 to +127
unsigned char
1
%c
0 to 255
short int
2
%hd
-32768 to +32767
unsigned short int
2
%hu
0 to 65535
int
2
%d
-32768 to +32767
unsigned int
2
%u
0 to 65535
long int
4
%ld
–2,147,483,648 to 2,147,483,647
unsigned long int
4
%lu
0 to 4,294,967,295
____________________________________________________________
*/



#include<stdio.h>
int main()
{
printf("---------------------------------------\n");
printf("Data Type            FS  Size   Range         \n");
printf("char                 %%c    1   -128 to 127\n");
printf("unsigned char        %%c    1    0 to 255\n" );
printf("short int            %hd    2    -32768 to 32767");
printf("unsigned short int   %hu    2    0 to 65535");
printf("int                  %d     4    -32768 to 32767");
printf("unsigned int         %u     4    0 to 65535");
printf("long int             %ld    4    -2 to 648");

}
