#include <stdio.h>

/**
 * main - Prints single digit of base 10 starting from 0 function putchar
 * Return:0 is a success
*/

int main(void)

{

int x;
char n;

for (x = '0'; x <= '9'; x++)
putchar(x);

for (n = 'a'; n <= 'f'; n++)
putchar(n);
putchar('\n');

return (0);
}
