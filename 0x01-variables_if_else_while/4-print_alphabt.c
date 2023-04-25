#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the alphabet in lowercase except q and e function putchar
 * Return: 0 is a succes
*/

int main(void)

{
char ch, e, q;

e = 'e';
q = 'q';

for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != e && ch != q)
putchar(ch);
}

putchar('\n');
return (0);
}
