#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints  alphabet lowercase  in reverse using fuction putchar
 * Return: 0 is success
*/

int main(void)

{

char ch;

for (ch = 'z'; ch >= 'a'; ch--)
putchar(ch);
putchar('\n');

return (0);
}
