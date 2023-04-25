#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main prints the alphabet in lowercase using putchar function
 * Return: 0 is a succes
*/

int main(void)

{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');

return (0);
}
