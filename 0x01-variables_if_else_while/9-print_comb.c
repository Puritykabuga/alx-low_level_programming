#include <stdio.h>

/**
 * main - Prints single digit of base 10 starting from 0 function putchar
 * Return:0 is a success
*/

int main(void)

{

int x;

for (x = '0'; x <= '9'; x++)
{
putchar(x);
if (x != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
